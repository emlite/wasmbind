#pragma once

#include "String.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

/// Wrapper for JavaScript URLSearchParams objects
///
/// URLSearchParams provides an interface for working with URL query strings,
/// allowing parsing, modification, and manipulation of key-value pairs in
/// the query portion of URLs.
class URLSearchParams : public emlite::Val {
    explicit URLSearchParams(Handle h) noexcept;

  public:
    /// Creates URLSearchParams from a raw handle
    /// @param h raw JavaScript handle
    /// @returns URLSearchParams wrapper object
    static URLSearchParams take_ownership(Handle h) noexcept;
    
    /// Creates URLSearchParams from an emlite::Val
    /// @param val emlite::Val to wrap
    URLSearchParams(const emlite::Val &val) noexcept;

    /// Gets value for specified key from search parameters
    /// @param key parameter name to look up
    /// @param out String to store the found value
    /// @returns true if key was found, false otherwise
    bool get(const char *key, String &out) const;

    /// Appends key-value pair to search parameters
    /// @param key parameter name
    /// @param value parameter value
    void append(const char *key, const char *value);

  private:
    /// Internal helper to avoid shadowing Val::get
    /// @param k key to look up
    /// @returns emlite::Val for the key
    emlite::Val get_key(const char *k) const;
};

/// Wrapper for JavaScript URL objects
///
/// URL provides an interface for parsing and manipulating URLs, with access
/// to various URL components like protocol, pathname, search parameters, etc.
/// It corresponds to the Web API URL constructor.
class URL : public emlite::Val {
    explicit URL(Handle h) noexcept;

  public:
    /// Creates URL from a raw handle
    /// @param h raw JavaScript handle
    /// @returns URL wrapper object
    static URL take_ownership(Handle h) noexcept;
    
    /// Creates URL from an emlite::Val
    /// @param val emlite::Val to wrap
    URL(const emlite::Val &val) noexcept;

    /// Creates URL from input string
    /// @param input URL string to parse
    URL(const char *input);

    /// Creates URL from input string relative to base
    /// @param input URL string to parse (may be relative)
    /// @param base base URL for resolving relative URLs
    URL(const char *input, const char *base);

    /// Gets the URL constructor function
    /// @returns emlite::Val representing the URL constructor
    static emlite::Val instance() noexcept;

    /// Gets the complete URL string
    /// @returns full URL as String
    [[nodiscard]] String href() const;
    
    /// Sets the complete URL string
    /// @param v new URL string
    void set_href(const char *v);
    
    /// Gets the protocol portion (e.g., "https:")
    /// @returns protocol string including colon
    [[nodiscard]] String protocol() const;
    
    /// Sets the protocol portion
    /// @param v new protocol string
    void set_protocol(const char *v);

    /// Gets the pathname portion
    /// @returns pathname string (e.g., "/path/to/resource")
    [[nodiscard]] String pathname() const;
    
    /// Sets the pathname portion
    /// @param v new pathname string
    void set_pathname(const char *v);

    /// Gets URLSearchParams object for query manipulation
    /// @returns URLSearchParams for this URL's query string
    [[nodiscard]] URLSearchParams search_params() const;

    /// Gets the search/query portion (e.g., "?key=value")
    /// @returns search string including question mark
    [[nodiscard]] String search() const;
    
    /// Sets the search/query portion
    /// @param value new search string
    void search(const String &value);
};
} // namespace jsbind
