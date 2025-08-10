#include <webbind/MemoryAttributionContainer.hpp>

namespace webbind {

MemoryAttributionContainer::MemoryAttributionContainer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MemoryAttributionContainer MemoryAttributionContainer::take_ownership(Handle h) noexcept {
    return MemoryAttributionContainer(h);
}

MemoryAttributionContainer::MemoryAttributionContainer(const emlite::Val &val) noexcept: emlite::Val(val) {}

MemoryAttributionContainer::MemoryAttributionContainer() noexcept: emlite::Val(emlite::Val::object()) {}

MemoryAttributionContainer MemoryAttributionContainer::clone() const noexcept { return *this; }

jsbind::String MemoryAttributionContainer::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void MemoryAttributionContainer::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::String MemoryAttributionContainer::src() const {
    return emlite::Val::get("src").as<jsbind::String>();
}

void MemoryAttributionContainer::src(const jsbind::String& value) {
    emlite::Val::set("src", value);
}


} // namespace webbind