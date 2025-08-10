#include <webbind/MemoryAttribution.hpp>
#include <webbind/MemoryAttributionContainer.hpp>

namespace webbind {

MemoryAttribution::MemoryAttribution(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MemoryAttribution MemoryAttribution::take_ownership(Handle h) noexcept {
    return MemoryAttribution(h);
}

MemoryAttribution::MemoryAttribution(const emlite::Val &val) noexcept: emlite::Val(val) {}

MemoryAttribution::MemoryAttribution() noexcept: emlite::Val(emlite::Val::object()) {}

MemoryAttribution MemoryAttribution::clone() const noexcept { return *this; }

jsbind::String MemoryAttribution::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void MemoryAttribution::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}

MemoryAttributionContainer MemoryAttribution::container() const {
    return emlite::Val::get("container").as<MemoryAttributionContainer>();
}

void MemoryAttribution::container(const MemoryAttributionContainer& value) {
    emlite::Val::set("container", value);
}

jsbind::String MemoryAttribution::scope() const {
    return emlite::Val::get("scope").as<jsbind::String>();
}

void MemoryAttribution::scope(const jsbind::String& value) {
    emlite::Val::set("scope", value);
}


} // namespace webbind