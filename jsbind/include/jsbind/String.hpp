#pragma once

#include "Any.hpp"
#include "Sequence.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>
#if __has_include(<string>)
#define JSBIND_HAS_STD_STRING 1
#include <string>
#include <string_view>
#endif

namespace jsbind {

class String : public emlite::Val {
    explicit String(Handle h) noexcept;

  public:
    static String take_ownership(Handle h) noexcept;
    explicit String(const emlite::Val &v) noexcept;
    String() noexcept;

    explicit String(const char *utf8);
#if JSBIND_HAS_STD_STRING
    explicit String(const std::string &utf8);
    explicit String(std::string_view utf8);
    [[nodiscard]] std::string to_std_string() const;
#endif
    [[nodiscard]] size_t size() const;
    [[nodiscard]] bool empty() const;

    char operator[](size_t i) const;

    [[nodiscard]] size_t byte_len() const noexcept;
    [[nodiscard]] bool is_empty() const noexcept;
    [[nodiscard]] String char_at(size_t i
    ) const noexcept; // C++ can't return Option<char>, so
                      // return String or maybe char
    [[nodiscard]] const char *as_str() const noexcept;
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
    // For split, you may need a Sequence<String> type or
    // similar
    [[nodiscard]] Sequence<String> split(const char *sep
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

    friend String operator+(
        const String &a, const String &b
    );

    DECLARE_CLONE(String)
};

DECLARE_STRING(ByteString)

DECLARE_STRING(DOMString)

DECLARE_STRING(CSSOMString)

DECLARE_STRING(USVString)

} // namespace jsbind