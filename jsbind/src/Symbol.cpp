#include <jsbind/Symbol.hpp>

using namespace jsbind;

Symbol::Symbol(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Symbol Symbol::take_ownership(Handle h) noexcept { return Symbol(h); }

Symbol::Symbol(const emlite::Val &val) noexcept : emlite::Val(val) {}

Symbol::Symbol(const String &description) noexcept
    : emlite::Val(emlite::Val::global("Symbol")(description)) {}

Symbol::Symbol() noexcept : emlite::Val(emlite::Val::global("Symbol")()) {}

emlite::Val Symbol::instance() noexcept {
    return emlite::Val::global("Symbol");
}

Symbol Symbol::clone() const noexcept { return *this; }

Option<String> Symbol::description() const noexcept {
    auto desc = get("description");
    if (desc.is_undefined()) {
        return none<String>();
    }
    return some(desc.as<String>());
}

Symbol Symbol::iterator() noexcept {
    return Symbol::take_ownership(emlite::Val::global("Symbol").get("iterator").as_handle());
}

Symbol Symbol::asyncIterator() noexcept {
    return Symbol::take_ownership(emlite::Val::global("Symbol").get("asyncIterator").as_handle());
}

Symbol Symbol::hasInstance() noexcept {
    return Symbol::take_ownership(emlite::Val::global("Symbol").get("hasInstance").as_handle());
}

Symbol Symbol::isConcatSpreadable() noexcept {
    return Symbol::take_ownership(emlite::Val::global("Symbol").get("isConcatSpreadable").as_handle());
}

Symbol Symbol::match() noexcept {
    return Symbol::take_ownership(emlite::Val::global("Symbol").get("match").as_handle());
}

Symbol Symbol::matchAll() noexcept {
    return Symbol::take_ownership(emlite::Val::global("Symbol").get("matchAll").as_handle());
}

Symbol Symbol::replace() noexcept {
    return Symbol::take_ownership(emlite::Val::global("Symbol").get("replace").as_handle());
}

Symbol Symbol::search() noexcept {
    return Symbol::take_ownership(emlite::Val::global("Symbol").get("search").as_handle());
}

Symbol Symbol::species() noexcept {
    return Symbol::take_ownership(emlite::Val::global("Symbol").get("species").as_handle());
}

Symbol Symbol::split() noexcept {
    return Symbol::take_ownership(emlite::Val::global("Symbol").get("split").as_handle());
}

Symbol Symbol::toPrimitive() noexcept {
    return Symbol::take_ownership(emlite::Val::global("Symbol").get("toPrimitive").as_handle());
}

Symbol Symbol::toStringTag() noexcept {
    return Symbol::take_ownership(emlite::Val::global("Symbol").get("toStringTag").as_handle());
}

Symbol Symbol::unscopables() noexcept {
    return Symbol::take_ownership(emlite::Val::global("Symbol").get("unscopables").as_handle());
}

Symbol Symbol::for_(const String &key) noexcept {
    return Symbol::take_ownership(emlite::Val::global("Symbol").call("for", key).as_handle());
}

Option<String> Symbol::keyFor(const Symbol &symbol) noexcept {
    auto result = emlite::Val::global("Symbol").call("keyFor", symbol);
    if (result.is_undefined()) {
        return none<String>();
    }
    return some(result.as<String>());
}

String Symbol::toString() const noexcept {
    return call("toString").as<String>();
}

String Symbol::valueOf() const noexcept {
    return call("valueOf").as<String>();
}

bool Symbol::empty() const noexcept {
    return get("description").is_undefined();
}

size_t Symbol::hash() const noexcept {
    // Simple hash based on handle value (no std library)
    return static_cast<size_t>(as_handle());
}

bool Symbol::operator<(const Symbol &other) const noexcept {
    return as_handle() < other.as_handle();
}

bool Symbol::operator>(const Symbol &other) const noexcept {
    return as_handle() > other.as_handle();
}

bool Symbol::operator<=(const Symbol &other) const noexcept {
    return as_handle() <= other.as_handle();
}

bool Symbol::operator>=(const Symbol &other) const noexcept {
    return as_handle() >= other.as_handle();
}