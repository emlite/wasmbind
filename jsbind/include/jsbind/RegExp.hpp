#pragma once

#include "Any.hpp"
#include "String.hpp"
#include "Array.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

class RegExp : public emlite::Val {
    explicit RegExp(Handle h) noexcept
        : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    static RegExp take_ownership(Handle h) noexcept {
        return RegExp(h);
    }

    explicit RegExp(const emlite::Val &val) noexcept
        : emlite::Val(val) {}

    /// Construct RegExp from pattern string
    explicit RegExp(const String &pattern) noexcept
        : emlite::Val(emlite::Val::global("RegExp").new_(pattern)) {}

    /// Construct RegExp from pattern and flags
    RegExp(const String &pattern, const String &flags) noexcept
        : emlite::Val(emlite::Val::global("RegExp").new_(pattern, flags)) {}

    /// Default constructor creates empty RegExp
    RegExp() noexcept
        : emlite::Val(emlite::Val::global("RegExp").new_()) {}

    static emlite::Val instance() noexcept {
        return emlite::Val::global("RegExp");
    }

    [[nodiscard]] RegExp clone() const noexcept {
        return *this;
    }

    // Properties
    [[nodiscard]] String source() const noexcept {
        return get("source").as<String>();
    }

    [[nodiscard]] String flags() const noexcept {
        return get("flags").as<String>();
    }

    [[nodiscard]] bool global() const noexcept {
        return get("global").as<bool>();
    }

    [[nodiscard]] bool ignoreCase() const noexcept {
        return get("ignoreCase").as<bool>();
    }

    [[nodiscard]] bool multiline() const noexcept {
        return get("multiline").as<bool>();
    }

    [[nodiscard]] bool dotAll() const noexcept {
        return get("dotAll").as<bool>();
    }

    [[nodiscard]] bool unicode() const noexcept {
        return get("unicode").as<bool>();
    }

    [[nodiscard]] bool sticky() const noexcept {
        return get("sticky").as<bool>();
    }

    [[nodiscard]] size_t lastIndex() const noexcept {
        return get("lastIndex").as<size_t>();
    }

    void setLastIndex(size_t index) noexcept {
        set("lastIndex", index);
    }

    // Methods with STL-like API

    /// Test if string matches pattern (equivalent to RegExp.test())
    [[nodiscard]] bool test(const String &str) const noexcept {
        return call("test", str).as<bool>();
    }

    /// Execute pattern against string, returns match result or none
    [[nodiscard]] Option<Array> exec(const String &str) const noexcept {
        auto result = call("exec", str);
        if (result.is_null()) {
            return none<Array>();
        }
        return some(result.as<Array>());
    }

    /// STL-like contains check
    [[nodiscard]] bool contains(const String &str) const noexcept {
        return test(str);
    }

    /// STL-like find operation - returns first match or none
    [[nodiscard]] Option<Array> find(const String &str) const noexcept {
        return exec(str);
    }

    /// Get all matches in string (similar to String.matchAll)
    [[nodiscard]] Array findAll(const String &str) const {
        if (!global()) {
            throw_js("RegExp must have global flag for findAll");
        }
        return str.call("matchAll", *this).as<Array>();
    }

    // Static factory methods for common patterns
    static RegExp literal(const String &text) noexcept {
        // Escape special regex characters
        auto escaped = text.call("replace", 
            RegExp(R"([.*+?^${}()|[\]\\])", "g"), 
            "\\$&");
        return RegExp(escaped.as<String>());
    }

    static RegExp caseInsensitive(const String &pattern) noexcept {
        return {pattern, "i"};
    }

    static RegExp global(const String &pattern) noexcept {
        return {pattern, "g"};
    }

    static RegExp globalIgnoreCase(const String &pattern) noexcept {
        return {pattern, "gi"};
    }

    static RegExp multiline(const String &pattern) noexcept {
        return {pattern, "m"};
    }

    // Iterator-like interface for global matches
    class MatchIterator {
        emlite::Val regexp_;
        String text_;
        Option<Array> current_match_;
        bool at_end_;

    public:
        MatchIterator(const RegExp &regexp, String text, bool at_end = false)
            : regexp_(regexp), text_(emlite::detail::move(text)), at_end_(at_end) {
            if (!at_end_ && regexp.global()) {
                regexp_.call("setLastIndex", 0);
                advance();
            }
        }

        Array operator*() const {
            if (!current_match_) {
                throw_js("Iterator at end");
            }
            return *current_match_;
        }

        MatchIterator& operator++() {
            advance();
            return *this;
        }

        bool operator!=(const MatchIterator& other) const {
            return at_end_ != other.at_end_;
        }

        bool operator==(const MatchIterator& other) const {
            return at_end_ == other.at_end_;
        }

    private:
        void advance() {
            auto result = regexp_.call("exec", text_);
            if (result.is_null()) {
                current_match_ = none<Array>();
                at_end_ = true;
            } else {
                current_match_ = some(result.as<Array>());
            }
        }
    };

    // STL-like iteration interface for global RegExp
    [[nodiscard]] MatchIterator begin(const String &text) const {
        if (!global()) {
            throw_js("RegExp must have global flag for iteration");
        }
        return {*this, text};
    }

    [[nodiscard]] MatchIterator end(const String &text) const {
        return {*this, text, true};
    }
};

} // namespace jsbind