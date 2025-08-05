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

    /// Creates String from UTF-16 string
    /// @param utf16 null-terminated UTF-16 string
    String(const char16_t *utf16);

#if JSBIND_HAS_STD_STRING
    /// Creates String from std::string
    /// @param utf8 UTF-8 string
    explicit String(const std::string &utf8);

    /// Creates String from std::string_view
    /// @param utf8 UTF-8 string view
    explicit String(std::string_view utf8);

    /// Creates String from std::u16string
    /// @param utf16 UTF-16 string
    explicit String(const std::u16string &utf16);

    /// Creates String from std::u16string_view
    /// @param utf16 UTF-16 string view
    explicit String(std::u16string_view utf16);

    /// Converts to std::string
    /// @returns std::string copy of the JavaScript string
    [[nodiscard]] Option<std::string> str() const;

    /// Converts to std::u16string
    /// @returns std::u16string copy of the JavaScript string
    [[nodiscard]] Option<std::u16string> u16str() const;
#endif

    /// Gets the length of the string
    /// @returns number of characters in the string
    [[nodiscard]] size_t size() const;

    /// Checks if the string is empty
    /// @returns true if string has zero length
    [[nodiscard]] bool empty() const noexcept;

    /// Gets character at index
    /// @param i character index
    /// @returns character at the specified index
    char operator[](size_t i) const;

    /// Gets the byte length of the string
    /// @returns number of bytes in UTF-8 representation
    [[nodiscard]] size_t byteLen() const noexcept;

    /// Gets character at specified index
    /// @param i character index
    /// @returns character at index as String
    [[nodiscard]] String charAt(size_t i) const noexcept;

    /// Converts string to C string
    /// @returns pointer to null-terminated C string
    [[nodiscard]] char *c_str() const noexcept;

    /// Gets the length of the string
    /// @returns number of characters
    [[nodiscard]] size_t length() const noexcept;

    /// Gets character code at index
    /// @param idx character index
    /// @returns character code or -1 if out of bounds
    [[nodiscard]] int charCodeAt(size_t idx) const noexcept;

    /// Sets character at index
    /// @param idx character index
    /// @param val character value to set
    void set(size_t idx, char val) noexcept;

    /// Gets character at index with bounds checking
    /// @param idx character index
    /// @returns character at index as String
    [[nodiscard]] String at(int idx) const noexcept;

    /// Gets Unicode code point at index
    /// @param idx character index
    /// @returns code point or -1 if out of bounds
    [[nodiscard]] int codePointAt(size_t idx) const noexcept;

    /// Concatenates with another string
    /// @param rhs string to concatenate
    /// @returns new concatenated string
    [[nodiscard]] String concat(const String &rhs) const noexcept;

    /// Checks if string ends with pattern
    /// @param pat pattern to check
    /// @returns true if string ends with pattern
    [[nodiscard]] bool endsWith(const char *pat) const noexcept;

    /// Checks if string includes pattern
    /// @param pat pattern to search for
    /// @returns true if pattern is found
    [[nodiscard]] bool includes(const char *pat) const noexcept;

    /// Finds first index of pattern
    /// @param pat pattern to search for
    /// @returns index of first occurrence or -1 if not found
    [[nodiscard]] int indexOf(const char *pat) const noexcept;

    /// Checks if string is well-formed Unicode
    /// @returns true if string is well-formed
    [[nodiscard]] bool isWellFormed() const noexcept;

    /// Finds last index of pattern
    /// @param pat pattern to search for
    /// @returns index of last occurrence or -1 if not found
    [[nodiscard]] int lastIndexOf(const char *pat) const noexcept;

    /// Compares strings using locale
    /// @param other string to compare with
    /// @returns comparison result (-1, 0, 1)
    [[nodiscard]] int localeCompare(const char *other) const noexcept;

    /// Matches string against pattern
    /// @param pat pattern to match
    /// @returns match result as Any
    [[nodiscard]] Option<TypedArray<String>> match(const Any &pat) const noexcept;

    /// Matches all occurrences of pattern
    /// @param pat pattern to match
    /// @returns all matches as Any
    [[nodiscard]] Option<TypedArray<String>> matchAll(const Any &pat) const noexcept;

    /// Normalizes Unicode string
    /// @param form normalization form (NFC, NFD, NFKC, NFKD)
    /// @returns normalized string
    [[nodiscard]] Result<String, Error> normalize(const char *form = nullptr) const noexcept;

    /// Pads string to target length at end
    /// @param target_len target length
    /// @param pad padding string
    /// @returns padded string
    [[nodiscard]] String padEnd(size_t target_len, const char *pad = nullptr) const noexcept;

    /// Pads string to target length at start
    /// @param target_len target length
    /// @param pad padding string
    /// @returns padded string
    [[nodiscard]] String padStart(size_t target_len, const char *pad = nullptr) const noexcept;

    /// Repeats string specified number of times
    /// @param count number of repetitions
    /// @returns repeated string
    [[nodiscard]] String repeat(size_t count) const noexcept;

    /// Replaces first occurrence of pattern
    /// @param pat pattern to replace
    /// @param repl replacement value
    /// @returns string with replacement
    [[nodiscard]] String replace(const Any &pat, const Any &repl) const noexcept;

    /// Replaces all occurrences of pattern
    /// @param pat pattern to replace
    /// @param repl replacement value
    /// @returns string with all replacements
    [[nodiscard]] String replaceAll(const Any &pat, const Any &repl) const noexcept;

    /// Searches for pattern
    /// @param pat pattern to search for
    /// @returns index of match or -1 if not found
    [[nodiscard]] int search(const Any &pat) const noexcept;

    /// Extracts slice of string
    /// @param start start index
    /// @param end end index (-1 for end of string)
    /// @returns sliced string
    [[nodiscard]] String slice(int start, int end = -1) const noexcept;

    /// Splits string by separator
    /// @param sep separator string
    /// @returns array of string parts
    [[nodiscard]] TypedArray<String> split(const char *sep) const noexcept;

    /// Checks if string starts with pattern
    /// @param pat pattern to check
    /// @returns true if string starts with pattern
    [[nodiscard]] bool startsWith(const char *pat) const noexcept;

    /// Extracts substring
    /// @param start start index
    /// @param end end index (-1 for end of string)
    /// @returns substring
    [[nodiscard]] String substring(size_t start, int end = -1) const noexcept;

    /// Converts to lowercase using locale
    /// @returns lowercase string
    [[nodiscard]] String toLocaleLowerCase() const noexcept;

    /// Converts to uppercase using locale
    /// @returns uppercase string
    [[nodiscard]] String toLocaleUpperCase() const noexcept;

    /// Converts to lowercase
    /// @returns lowercase string
    [[nodiscard]] String toLowerCase() const noexcept;

    /// Converts to uppercase
    /// @returns uppercase string
    [[nodiscard]] String toUpperCase() const noexcept;

    /// Converts to well-formed Unicode
    /// @returns well-formed string
    [[nodiscard]] String toWellFormed() const noexcept;

    /// Removes whitespace from both ends
    /// @returns trimmed string
    [[nodiscard]] String trim() const noexcept;

    /// Removes whitespace from end
    /// @returns trimmed string
    [[nodiscard]] String trimEnd() const noexcept;

    /// Removes whitespace from start
    /// @returns trimmed string
    [[nodiscard]] String trimStart() const noexcept;

    /// Converts to string representation
    /// @returns string representation
    [[nodiscard]] String toString() const noexcept;

    /// Gets primitive value
    /// @returns primitive string value
    [[nodiscard]] String valueOf() const noexcept;

    /// String concatenation operator
    /// @param a first string
    /// @param b second string
    /// @returns concatenated string
    friend String operator+(const String &a, const String &b);

    DECLARE_CLONE(String)
};
} // namespace jsbind