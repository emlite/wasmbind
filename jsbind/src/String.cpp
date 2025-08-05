#include <emlite/emlite.hpp>
#include <jsbind/String.hpp>
#include <jsbind/Error.hpp>

using namespace jsbind;
using emlite::Uniq;

String::String(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

String String::take_ownership(Handle h) noexcept { return String(h); }
String::String(const emlite::Val &v) noexcept : emlite::Val(v) {}
String::String() noexcept : emlite::Val("") {}

emlite::Val String::instance() noexcept { return emlite::Val::global("String"); }

String::String(const char *s) : emlite::Val(s) {}

String::String(const char16_t *s) : emlite::Val(s) {}

#if JSBIND_HAS_STD_STRING
String::String(const std::string &utf8) : emlite::Val(utf8.c_str()) {}

String::String(std::string_view utf8)
    : emlite::Val(emlite::Val::take_ownership(emlite_val_make_str(utf8.data(), utf8.size()))) {}

String::String(const std::u16string &utf16) : emlite::Val(utf16.c_str()) {}

String::String(std::u16string_view utf16)
    : emlite::Val(emlite::Val::take_ownership(emlite_val_make_str_utf16(utf16.data(), utf16.size()))) {}

Option<std::string> String::str() const {
    auto temp = Uniq<char[]>.get();
    if (temp)
        return as<Uniq<char[]>>().release();
    else
        return nullopt;
}

Option<std::u16string> String::u16str() const {
    auto temp = as<Uniq<char16_t[]>>();
    if (temp.get())
        return std::u16string(temp.release());
    else
        return nullopt;
}
#endif

size_t String::size() const { return length(); }
bool String::empty() const noexcept { return length() == 0; }
char String::operator[](size_t i) const { return as<Uniq<char[]>>().get()[i]; }

size_t String::byteLen() const noexcept {
    const char *str = c_str();
    size_t len      = 0;
    while (str && str[len] != '\0')
        ++len;
    return len;
}

String String::charAt(size_t i) const noexcept {
    // JS: String.prototype.charAt returns a string
    // (possibly empty)
    return String(this->call("charAt", i));
}

char *String::c_str() const noexcept {
    // Assumes emlite::Val provides a way to get a C string
    // view
    return as<Uniq<char[]>>().release();
}

size_t String::length() const noexcept {
    // JS: String.length is number of UTF-16 code units
    return this->get("length").as<size_t>();
}

int String::charCodeAt(size_t idx) const noexcept {
    Any v = this->call("charCodeAt", idx);
    if (v.isUndefined())
        return -1;
    return v.as<int>();
}

void String::set(size_t idx, char val) noexcept { this->set(idx, val); }

String String::at(int idx) const noexcept {
    // JS: String.prototype.at returns a string (possibly
    // empty)
    return String(this->call("at", idx));
}

int String::codePointAt(size_t idx) const noexcept {
    Any v = this->call("codePointAt", idx);
    if (v.isUndefined())
        return -1;
    return v.as<int>();
}

String String::concat(const String &rhs) const noexcept {
    return String(this->call("concat", rhs));
}

bool String::endsWith(const char *pat) const noexcept {
    return this->call("endsWith", pat).as<bool>();
}

bool String::includes(const char *pat) const noexcept {
    return this->call("includes", pat).as<bool>();
}

int String::indexOf(const char *pat) const noexcept {
    int n = this->call("indexOf", pat).as<int>();
    return n == -1 ? -1 : n;
}

bool String::isWellFormed() const noexcept { return this->call("isWellFormed").as<bool>(); }

int String::lastIndexOf(const char *pat) const noexcept {
    int n = this->call("lastIndexOf", pat).as<int>();
    return n == -1 ? -1 : n;
}

int String::localeCompare(const char *other) const noexcept {
    return this->call("localeCompare", other).as<int>();
}

Option<TypedArray<String>> String::match(const Any &pat) const noexcept { return this->call("match", pat).as<Option<TypedArray<String>>>(); }

Option<TypedArray<String>> String::matchAll(const Any &pat) const noexcept { return this->call("matchAll", pat).as<Option<TypedArray<String>>>(); }

Result<String, Error> String::normalize(const char *form) const noexcept {
    if (form) {
        return this->call("normalize", form).as<Result<String, Error>>();
    }
    return this->call("normalize").as<Result<String, Error>>();
}

String String::padEnd(size_t target_len, const char *pad) const noexcept {
    if (pad) {
        return String(this->call("padEnd", target_len, pad));
    }
    return String(this->call("padEnd", target_len));
}

String String::padStart(size_t target_len, const char *pad) const noexcept {
    if (pad) {
        return String(this->call("padStart", target_len, pad));
    }
    return String(this->call("padStart", target_len));
}

String String::repeat(size_t count) const noexcept { return String(this->call("repeat", count)); }

String String::replace(const Any &pat, const Any &repl) const noexcept {
    return String(this->call("replace", pat, repl));
}

String String::replaceAll(const Any &pat, const Any &repl) const noexcept {
    return String(this->call("replaceAll", pat, repl));
}

int String::search(const Any &pat) const noexcept { return this->call("search", pat).as<int>(); }

String String::slice(int start, int end) const noexcept {
    if (end != -1) {
        return String(this->call("slice", start, end));
    }
    return String(this->call("slice", start));
}

TypedArray<String> String::split(const char *sep) const noexcept {
    return this->call("split", sep).as<TypedArray<String>>();
}

bool String::startsWith(const char *pat) const noexcept {
    return this->call("startsWith", pat).as<bool>();
}

String String::substring(size_t start, int end) const noexcept {
    if (end != -1) {
        return String(this->call("substring", start, end));
    }
    return String(this->call("substring", start));
}

String String::toLocaleLowerCase() const noexcept {
    return String(this->call("toLocaleLowerCase"));
}

String String::toLocaleUpperCase() const noexcept {
    return String(this->call("toLocaleUpperCase"));
}

String String::toLowerCase() const noexcept { return String(this->call("toLowerCase")); }

String String::toUpperCase() const noexcept { return String(this->call("toUpperCase")); }

String String::toWellFormed() const noexcept { return String(this->call("toWellFormed")); }

String String::trim() const noexcept { return String(this->call("trim")); }

String String::trimEnd() const noexcept { return String(this->call("trimEnd")); }

String String::trimStart() const noexcept { return String(this->call("trimStart")); }

String String::toString() const noexcept { return String(this->call("toString")); }

String String::valueOf() const noexcept { return String(this->call("valueOf")); }

String operator+(const String &a, const String &b) { return a.call("concat", b).as<String>(); }

DEFINE_CLONE(String)
