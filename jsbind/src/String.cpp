#include <emlite/emlite.hpp>
#include <jsbind/String.hpp>

using namespace jsbind;
using emlite::Uniq;

String::String(Handle h) noexcept
    : emlite::Val(emlite::Val::take_ownership(h)) {}

String String::take_ownership(Handle h) noexcept {
    return String(h);
}
String::String(const emlite::Val &v) noexcept
    : emlite::Val(v) {}
String::String() noexcept : emlite::Val("") {}

emlite::Val String::instance() noexcept {
    return emlite::Val::global("String");
}

String::String(const char *s) : emlite::Val(s) {}

#if JSBIND_HAS_STD_STRING
String::String(const std::string &utf8)
    : emlite::Val(utf8.c_str()) {}

String::String(std::string_view utf8)
    : emlite::Val(emlite::Val::take_ownership(
          emlite_val_make_str(utf8.data(), utf8.size())
      )) {}

std::string String::to_std_string() const {
    return as<Uniq<char[]>>().release();
}
#endif

size_t String::size() const {
    return length();
}
bool String::empty() const {
    return length() == 0;
}
char String::operator[](size_t i) const {
    return as<Uniq<char[]>>().get()[i];
}

size_t String::byte_len() const noexcept {
    const char *str = as_str();
    size_t len      = 0;
    while (str && str[len] != '\0')
        ++len;
    return len;
}

bool String::is_empty() const noexcept {
    return length() == 0;
}

String String::char_at(size_t i) const noexcept {
    // JS: String.prototype.charAt returns a string
    // (possibly empty)
    return String(this->call("charAt", i));
}

char *String::as_str() const noexcept {
    // Assumes emlite::Val provides a way to get a C string
    // view
    return as<Uniq<char[]>>().release();
}

size_t String::length() const noexcept {
    // JS: String.length is number of UTF-16 code units
    return this->get("length").as<size_t>();
}

int String::char_code_at(size_t idx) const noexcept {
    Any v = this->call("charCodeAt", idx);
    if (v.isUndefined())
        return -1;
    return v.as<int>();
}

void String::set(size_t idx, char val) noexcept {
    this->set(idx, val);
}

String String::at(int idx) const noexcept {
    // JS: String.prototype.at returns a string (possibly
    // empty)
    return String(this->call("at", idx));
}

int String::code_point_at(size_t idx) const noexcept {
    Any v = this->call("codePointAt", idx);
    if (v.isUndefined())
        return -1;
    return v.as<int>();
}

String String::concat(const String &rhs) const noexcept {
    return String(this->call("concat", rhs));
}

bool String::ends_with(const char *pat) const noexcept {
    return this->call("endsWith", pat).as<bool>();
}

bool String::includes(const char *pat) const noexcept {
    return this->call("includes", pat).as<bool>();
}

int String::index_of(const char *pat) const noexcept {
    int n = this->call("indexOf", pat).as<int>();
    return n == -1 ? -1 : n;
}

bool String::is_well_formed() const noexcept {
    return this->call("isWellFormed").as<bool>();
}

int String::last_index_of(const char *pat) const noexcept {
    int n = this->call("lastIndexOf", pat).as<int>();
    return n == -1 ? -1 : n;
}

int String::locale_compare(const char *other
) const noexcept {
    return this->call("localeCompare", other).as<int>();
}

Any String::match_(const Any &pat) const noexcept {
    return this->call("match", pat);
}

Any String::match_all(const Any &pat) const noexcept {
    return this->call("matchAll", pat);
}

String String::normalize(const char *form) const noexcept {
    if (form) {
        return String(this->call("normalize", form));
    }
    return String(this->call("normalize"));
}

String String::pad_end(size_t target_len, const char *pad)
    const noexcept {
    if (pad) {
        return String(this->call("padEnd", target_len, pad)
        );
    }
    return String(this->call("padEnd", target_len));
}

String String::pad_start(size_t target_len, const char *pad)
    const noexcept {
    if (pad) {
        return String(
            this->call("padStart", target_len, pad)
        );
    }
    return String(this->call("padStart", target_len));
}

String String::repeat(size_t count) const noexcept {
    return String(this->call("repeat", count));
}

String String::replace(const Any &pat, const Any &repl)
    const noexcept {
    return String(this->call("replace", pat, repl));
}

String String::replace_all(const Any &pat, const Any &repl)
    const noexcept {
    return String(this->call("replaceAll", pat, repl));
}

int String::search(const Any &pat) const noexcept {
    return this->call("search", pat).as<int>();
}

String String::slice(int start, int end) const noexcept {
    if (end != -1) {
        return String(this->call("slice", start, end));
    }
    return String(this->call("slice", start));
}

TypedArray<String> String::split(const char *sep
) const noexcept {
    return this->call("split", sep)
        .as<TypedArray<String>>();
}

bool String::starts_with(const char *pat) const noexcept {
    return this->call("startsWith", pat).as<bool>();
}

String String::substring(size_t start, int end)
    const noexcept {
    if (end != -1) {
        return String(this->call("substring", start, end));
    }
    return String(this->call("substring", start));
}

String String::to_locale_lower_case() const noexcept {
    return String(this->call("toLocaleLowerCase"));
}

String String::to_locale_upper_case() const noexcept {
    return String(this->call("toLocaleUpperCase"));
}

String String::to_lower_case() const noexcept {
    return String(this->call("toLowerCase"));
}

String String::to_upper_case() const noexcept {
    return String(this->call("toUpperCase"));
}

String String::to_well_formed() const noexcept {
    return String(this->call("toWellFormed"));
}

String String::trim() const noexcept {
    return String(this->call("trim"));
}

String String::trim_end() const noexcept {
    return String(this->call("trimEnd"));
}

String String::trim_start() const noexcept {
    return String(this->call("trimStart"));
}

String String::toString() const noexcept {
    return String(this->call("toString"));
}

String String::substr(int from, int length) const noexcept {
    if (length != -1) {
        return String(this->call("substr", from, length));
    }
    return String(this->call("substr", from));
}

String String::valueOf() const noexcept {
    return String(this->call("valueOf"));
}

String operator+(const String &a, const String &b) {
    return a.call("concat", b).as<String>();
}

DEFINE_CLONE(String)
