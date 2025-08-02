#pragma once

#include "Any.hpp"
#include "Array.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>

#if __has_include(<string>)
#define JSBIND_HAS_STD_STRING 1
#include <string>
#include <string_view>
#endif

namespace jsbind {

/// Wrapper for JavaScript strings
///
/// String provides a C++-friendly interface for JavaScript string objects,
/// with methods for string manipulation, character access, and conversion
/// to/from C++ string types when available.
class String : public emlite::Val {
    explicit String(Handle h) noexcept;

  public:
    /// Creates String from a raw handle
    /// @param h raw JavaScript handle
    /// @returns String wrapper object
    static String take_ownership(Handle h) noexcept;
    
    /// Creates String from an emlite::Val
    /// @param v emlite::Val to wrap
    explicit String(const emlite::Val &v) noexcept;
    
    /// Creates empty String
    String() noexcept;

    /// Gets the String constructor function
    /// @returns emlite::Val representing the String constructor
    static emlite::Val instance() noexcept;

    /// Creates String from C string
    /// @param utf8 null-terminated UTF-8 string
    String(const char *utf8);
    
#if JSBIND_HAS_STD_STRING
    /// Creates String from std::string
    /// @param utf8 UTF-8 string
    explicit String(const std::string &utf8);
    
    /// Creates String from std::string_view
    /// @param utf8 UTF-8 string view
    explicit String(std::string_view utf8);
    
    /// Converts to std::string
    /// @returns std::string copy of the JavaScript string
    [[nodiscard]] std::string to_std_string() const;
#endif

    /// Gets the length of the string
    /// @returns number of characters in the string
    [[nodiscard]] size_t size() const;
    
    /// Checks if the string is empty
    /// @returns true if string has zero length
    [[nodiscard]] bool empty() const;

    /// Gets character at index
    /// @param i character index
    /// @returns character at the specified index
    char operator[](size_t i) const;

    [[nodiscard]] size_t byte_len() const noexcept;
    [[nodiscard]] bool is_empty() const noexcept;
    [[nodiscard]] String char_at(size_t i
    ) const noexcept; // C++ can't return Option<char>, so
                      // return String or maybe char
    [[nodiscard]] char *as_str() const noexcept;
    [[nodiscard]] size_t length() const noexcept;
    [[nodiscard]] int char_code_at(size_t idx
    ) const noexcept; // returns -1 if out of bounds
    void set(size_t idx, char val) noexcept;
    [[nodiscard]] String at(int idx) const noexcept;
    [[nodiscard]] int code_point_at(size_t idx
    ) const noexcept; // returns -1 if out of bounds
    [[nodiscard]] String concat(const String &rhs
    ) const noexcept;
    [[nodiscard]] bool ends_with(const char *pat
    ) const noexcept;
    [[nodiscard]] bool includes(const char *pat
    ) const noexcept;
    [[nodiscard]] int index_of(const char *pat
    ) const noexcept; // returns -1 if not found
    [[nodiscard]] bool is_well_formed() const noexcept;
    [[nodiscard]] int last_index_of(const char *pat
    ) const noexcept; // returns -1 if not found
    [[nodiscard]] int locale_compare(const char *other
    ) const noexcept;
    [[nodiscard]] Any match_(const Any &pat) const noexcept;
    [[nodiscard]] Any match_all(const Any &pat
    ) const noexcept;
    [[nodiscard]] String normalize(
        const char *form = nullptr
    ) const noexcept;
    [[nodiscard]] String pad_end(
        size_t target_len, const char *pad = nullptr
    ) const noexcept;
    [[nodiscard]] String pad_start(
        size_t target_len, const char *pad = nullptr
    ) const noexcept;
    [[nodiscard]] String repeat(size_t count
    ) const noexcept;
    [[nodiscard]] String replace(
        const Any &pat, const Any &repl
    ) const noexcept;
    [[nodiscard]] String replace_all(
        const Any &pat, const Any &repl
    ) const noexcept;
    [[nodiscard]] int search(const Any &pat) const noexcept;
    [[nodiscard]] String slice(int start, int end = -1)
        const noexcept;
    // For split, you may need a TypedArray<String> type or
    // similar
    [[nodiscard]] TypedArray<String> split(const char *sep
    ) const noexcept;
    [[nodiscard]] bool starts_with(const char *pat
    ) const noexcept;
    [[nodiscard]] String substring(
        size_t start, int end = -1
    ) const noexcept;
    [[nodiscard]] String to_locale_lower_case(
    ) const noexcept;
    [[nodiscard]] String to_locale_upper_case(
    ) const noexcept;
    [[nodiscard]] String to_lower_case() const noexcept;
    [[nodiscard]] String to_upper_case() const noexcept;
    [[nodiscard]] String to_well_formed() const noexcept;
    [[nodiscard]] String trim() const noexcept;
    [[nodiscard]] String trim_end() const noexcept;
    [[nodiscard]] String trim_start() const noexcept;
    [[nodiscard]] String toString() const noexcept;
    [[nodiscard]] String substr(int from, int length = -1)
        const noexcept;
    [[nodiscard]] String valueOf() const noexcept;

    friend String operator+(
        const String &a, const String &b
    );

    DECLARE_CLONE(String)
};
} // namespace jsbind