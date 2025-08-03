#pragma once

#include "Array.hpp"
#include "String.hpp"
#include <emlite/emlite.hpp>
#include <stdint.h>

namespace jsbind {

/// Result structure for TextEncoder::encode_into operation
struct EncodeResult {
    size_t read;     ///< Number of UTF-16 code units read from input
    size_t written;  ///< Number of UTF-8 bytes written to output
};

/// Wrapper for JavaScript TextEncoder objects
///
/// TextEncoder provides functionality to encode strings into UTF-8 byte arrays.
/// It corresponds to the Web API TextEncoder which always uses UTF-8 encoding.
class TextEncoder : public emlite::Val {
    explicit TextEncoder(Handle h) noexcept;

  public:
    /// Creates TextEncoder from a raw handle
    /// @param h raw JavaScript handle
    /// @returns TextEncoder wrapper object
    static TextEncoder take_ownership(Handle h) noexcept;
    
    /// Creates TextEncoder from an emlite::Val
    /// @param val emlite::Val to wrap
    TextEncoder(const emlite::Val &val) noexcept;
    
    /// Creates new TextEncoder (always UTF-8)
    TextEncoder();

    /// Gets the TextEncoder constructor function
    /// @returns emlite::Val representing the TextEncoder constructor
    static emlite::Val instance() noexcept;

    /// Encodes string to UTF-8 bytes
    /// @param str null-terminated string to encode
    /// @returns Uint8Array containing UTF-8 encoded bytes
    Uint8Array encode(const char *str) const;

    /// Encodes string into existing byte array
    /// @param src null-terminated source string
    /// @param dst destination Uint8Array to write into
    /// @returns EncodeResult with read/written counts
    EncodeResult encode_into(const char *src, Uint8Array &dst) const;
};

/// Wrapper for JavaScript TextDecoder objects
///
/// TextDecoder provides functionality to decode byte arrays into strings using
/// various character encodings. It corresponds to the Web API TextDecoder which
/// supports multiple text encodings with UTF-8 as the default.
class TextDecoder : public emlite::Val {
    explicit TextDecoder(Handle h) noexcept;

  public:
    /// Creates TextDecoder from a raw handle
    /// @param h raw JavaScript handle
    /// @returns TextDecoder wrapper object
    static TextDecoder take_ownership(Handle h) noexcept;
    
    /// Creates TextDecoder from an emlite::Val
    /// @param val emlite::Val to wrap
    TextDecoder(const emlite::Val &val) noexcept;
    
    /// Creates new TextDecoder with UTF-8 encoding
    TextDecoder();

    /// Creates new TextDecoder with specified encoding
    /// @param label encoding label (e.g., "utf-8", "iso-8859-1")
    TextDecoder(const char *label);

    /// Creates new TextDecoder with options
    /// @param opts options object for decoder configuration
    TextDecoder(const Any &opts);

    /// Gets the TextDecoder constructor function
    /// @returns emlite::Val representing the TextDecoder constructor
    static emlite::Val instance() noexcept;

    /// Creates new TextDecoder with encoding and options
    /// @param label encoding label (e.g., "utf-8", "iso-8859-1")
    /// @param opts options object for decoder configuration
    TextDecoder(const char *label, const Any &opts);

    /// Decodes byte array to string
    /// @param bytes Uint8Array containing encoded bytes
    /// @returns decoded String
    [[nodiscard]] String decode(const Uint8Array &bytes) const;
};
} // namespace jsbind