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

String::String(const char *s) : emlite::Val(s) {}
size_t String::size() const {
    return strlen(as<Uniq<char[]>>().get());
}
bool String::empty() const {
    return strlen(as<Uniq<char[]>>().get()) == 0;
}
char String::operator[](size_t i) const {
    return as<Uniq<char[]>>().get()[i];
}

String operator+(const String &a, const String &b) {
    return a.call("concat", b).as<String>();
}

DEFINE_CLONE(String)

DEFINE_STRING(ByteString)

DEFINE_STRING(DOMString)

DEFINE_STRING(CSSOMString)

DEFINE_STRING(USVString)