#pragma once

#include "Any.hpp"
#include "Array.hpp"
#include "Error.hpp"
#include "String.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

/// Wrapper for JavaScript RegExp objects
///
/// RegExp provides pattern matching functionality with support for flags,
/// global matching, iteration over matches, and STL-like interface
/// for common regular expression operations.
class RegExp : public emlite::Val {
    explicit RegExp(Handle h) noexcept;

    explicit RegExp(const String &pattern) noexcept;
    RegExp(const String &pattern, const String &flags) noexcept;

  public:
    /// Creates RegExp from a raw handle
    /// @param h raw JavaScript handle
    /// @returns RegExp wrapper object
    static RegExp take_ownership(Handle h) noexcept;

    /// Creates RegExp from an emlite::Val
    /// @param val emlite::Val to wrap
    explicit RegExp(const emlite::Val &val) noexcept;

    /// Creates RegExp from pattern string
    /// @param pattern regular expression pattern
    static Result<RegExp, Error> create(const String &pattern) noexcept;

    /// Creates RegExp from pattern and flags
    /// @param pattern regular expression pattern
    /// @param flags regex flags (g, i, m, s, u, y)
    static Result<RegExp, Error> create(const String &pattern, const String &flags) noexcept;

    /// Creates empty RegExp
    RegExp() noexcept;

    /// Gets the RegExp constructor function
    /// @returns emlite::Val representing the RegExp constructor
    static emlite::Val instance() noexcept;

    /// Creates a copy of this RegExp
    /// @returns cloned RegExp
    [[nodiscard]] RegExp clone() const noexcept;

    // Properties
    /// Gets source pattern
    /// @returns pattern string
    [[nodiscard]] String source() const noexcept;

    /// Gets flags string
    /// @returns flags like "gi" or "m"
    [[nodiscard]] String flags() const noexcept;

    /// Checks if global flag is set
    /// @returns true if global flag active
    [[nodiscard]] bool global() const noexcept;

    /// Checks if ignore-case flag is set
    /// @returns true if case-insensitive
    [[nodiscard]] bool ignoreCase() const noexcept;

    /// Checks if multiline flag is set
    /// @returns true if multiline mode active
    [[nodiscard]] bool multiline() const noexcept;

    /// Checks if dotAll flag is set
    /// @returns true if dot matches newlines
    [[nodiscard]] bool dotAll() const noexcept;

    /// Checks if unicode flag is set
    /// @returns true if unicode mode active
    [[nodiscard]] bool unicode() const noexcept;

    /// Checks if sticky flag is set
    /// @returns true if sticky mode active
    [[nodiscard]] bool sticky() const noexcept;

    /// Gets current lastIndex for global matching
    /// @returns index position for next search
    [[nodiscard]] size_t lastIndex() const noexcept;

    /// Sets lastIndex for global matching
    /// @param index position for next search
    void setLastIndex(size_t index) noexcept;

    // Methods with STL-like API
    /// Tests if string matches pattern
    /// @param str string to test
    /// @returns true if pattern matches
    [[nodiscard]] bool test(const String &str) const noexcept;

    /// Executes pattern against string
    /// @param str string to search
    /// @returns Option containing match array or None
    [[nodiscard]] Option<Array> exec(const String &str) const noexcept;

    /// STL-like contains check
    /// @param str string to check
    /// @returns true if pattern found
    [[nodiscard]] bool contains(const String &str) const noexcept;

    /// STL-like find operation
    /// @param str string to search
    /// @returns Option containing first match or None
    [[nodiscard]] Option<Array> find(const String &str) const noexcept;

    /// Gets all matches in string (requires global flag)
    /// @param str string to search
    /// @returns Array of all matches
    /// @throws JavaScript error if not global
    [[nodiscard]] Array findAll(const String &str) const;

    // Static factory methods for common patterns
    /// Creates RegExp that matches literal text
    /// @param text literal string to match
    /// @returns RegExp with escaped special characters
    static Result<RegExp, Error> literal(const String &text) noexcept;

    /// Creates case-insensitive RegExp
    /// @param pattern regex pattern
    /// @returns RegExp with 'i' flag
    static Result<RegExp, Error> caseInsensitive(const String &pattern) noexcept;

    /// Creates global RegExp
    /// @param pattern regex pattern
    /// @returns RegExp with 'g' flag
    static Result<RegExp, Error> global(const String &pattern) noexcept;

    /// Creates global case-insensitive RegExp
    /// @param pattern regex pattern
    /// @returns RegExp with 'gi' flags
    static Result<RegExp, Error> globalIgnoreCase(const String &pattern) noexcept;

    /// Creates multiline RegExp
    /// @param pattern regex pattern
    /// @returns RegExp with 'm' flag
    static Result<RegExp, Error> multiline(const String &pattern) noexcept;

    // Iterator-like interface for global matches
    class MatchIterator {
        emlite::Val regexp_;
        String text_;
        Option<Array> current_match_;
        bool at_end_;

      public:
        /// Creates iterator for global RegExp matching
        /// @param regexp RegExp to use for matching
        /// @param text string to search
        /// @param at_end whether iterator is at end
        MatchIterator(const RegExp &regexp, String text, bool at_end = false);

        /// Dereferences to current match
        /// @returns current match array
        /// @throws JavaScript error if at end
        Array operator*() const;

        /// Advances to next match
        /// @returns reference to this iterator
        MatchIterator &operator++();

        /// Checks inequality with other iterator
        /// @param other iterator to compare
        /// @returns true if different
        bool operator!=(const MatchIterator &other) const;

        /// Checks equality with other iterator
        /// @param other iterator to compare
        /// @returns true if same
        bool operator==(const MatchIterator &other) const;

      private:
        /// Advances iterator to next match
        void advance();
    };

    /// Gets iterator to first match (requires global flag)
    /// @param text string to search
    /// @returns iterator to first match
    /// @throws JavaScript error if not global
    [[nodiscard]] MatchIterator begin(const String &text) const;

    /// Gets end iterator
    /// @param text string to search
    /// @returns end iterator
    [[nodiscard]] MatchIterator end(const String &text) const;
};

} // namespace jsbind