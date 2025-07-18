#pragma once

#include "Array.hpp"
#include "String.hpp"
#include <emlite/emlite.hpp>
#include <stdint.h>

namespace jsbind {

struct EncodeResult {
    size_t read;
    size_t written;
};

class TextEncoder : public emlite::Val {
    explicit TextEncoder(Handle h) noexcept;

  public:
    static TextEncoder take_ownership(Handle h) noexcept;
    TextEncoder(const emlite::Val &val) noexcept;
    /* Construct `new TextEncoder()` (always UTF-8) */
    TextEncoder();

    /* encoder.encode(str) → Uint8Array */
    Uint8Array encode(const char *str) const;

    /* encoder.encodeInto(src, dst) → {read, written} */
    EncodeResult encode_into(
        const char *src, Uint8Array &dst
    ) const;
};

/*==================================================================
  TextDecoder   – mirrors JS `new TextDecoder(label?,
  options?)`
  ==================================================================*/
class TextDecoder : public emlite::Val {
    explicit TextDecoder(Handle h) noexcept;

  public:
    static TextDecoder take_ownership(Handle h) noexcept;
    TextDecoder(const emlite::Val &val) noexcept;
    /* new TextDecoder() */
    TextDecoder();

    /* new TextDecoder(label) */
    TextDecoder(const char *label);

    /* new TextDecoder(options) */
    TextDecoder(const Any &opts);

    /* new TextDecoder(label, options) */
    TextDecoder(const char *label, const Any &opts);

    /* decoder.decode(bytes) -> String (UTF-8) */
    [[nodiscard]] String decode(const Uint8Array &bytes) const;
};
} // namespace jsbind