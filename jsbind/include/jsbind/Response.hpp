#pragma once

#include "Array.hpp"
#include "Promise.hpp"
#include "String.hpp"
#include <emlite/emlite.hpp>
#include <stdint.h>

namespace jsbind {

/// Wrapper for JavaScript Response objects
///
/// Response represents the response to a fetch request, providing access
/// to response status, headers, and methods for reading the response body
/// in various formats (text, JSON, ArrayBuffer).
class Response : public emlite::Val {
    explicit Response(Handle h) noexcept;

  public:
    /// Creates Response from a raw handle
    /// @param h raw JavaScript handle  
    /// @returns Response wrapper object
    static Response take_ownership(Handle h) noexcept;
    
    /// Creates Response from an emlite::Val
    /// @param val emlite::Val to wrap
    Response(const emlite::Val &val) noexcept;

    /// Gets the Response constructor function
    /// @returns emlite::Val representing the Response constructor
    static emlite::Val instance() noexcept;

    /// Checks if response was successful
    /// @returns true if status code is in 200-299 range
    [[nodiscard]] bool ok() const;

    /// Gets HTTP status code
    /// @returns numeric status code (e.g., 200, 404, 500)
    [[nodiscard]] uint16_t status() const;

    /// Gets response headers as raw object
    /// @returns raw headers object for custom processing
    [[nodiscard]] Any headers_raw() const;

    /// Reads response body as text
    /// @returns Promise that resolves to String containing response text
    [[nodiscard]] Promise<String> text() const;
    
    /// Reads response body as JSON
    /// @returns Promise that resolves to parsed JSON object
    [[nodiscard]] Promise<Any> json() const;
    
    /// Reads response body as ArrayBuffer
    /// @returns Promise that resolves to ArrayBuffer containing binary data
    [[nodiscard]] Promise<ArrayBuffer> array_buffer() const;
};

/// Performs HTTP fetch request with URL string
/// @param input URL string to fetch
/// @returns Promise that resolves to Response object
Promise<Response> fetch(const char *input);

/// Performs HTTP fetch request with URL and options
/// @param input URL string to fetch
/// @param init request options object (method, headers, body, etc.)
/// @returns Promise that resolves to Response object
Promise<Response> fetch(const char *input, const Any &init);

/// Performs HTTP fetch request with Request object or URL
/// @param input Request object or URL string
/// @returns Promise that resolves to Response object
Promise<Response> fetch_val(const Any &input);

/// Performs HTTP fetch request with Request object/URL and options
/// @param input Request object or URL string
/// @param init request options object (method, headers, body, etc.)
/// @returns Promise that resolves to Response object
Promise<Response> fetch_val(const Any &input, const Any &init);

} // namespace jsbind