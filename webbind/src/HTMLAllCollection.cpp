#include "webbind/HTMLAllCollection.hpp"
#include "webbind/Element.hpp"

namespace webbind {

HTMLAllCollection HTMLAllCollection::take_ownership(Handle h) noexcept {
        return HTMLAllCollection(h);
    }
HTMLAllCollection HTMLAllCollection::clone() const noexcept { return *this; }
emlite::Val HTMLAllCollection::instance() noexcept { return emlite::Val::global("HTMLAllCollection"); }
HTMLAllCollection::HTMLAllCollection(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HTMLAllCollection::HTMLAllCollection(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned long HTMLAllCollection::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

jsbind::Any HTMLAllCollection::namedItem(const jsbind::String& name) {
    return emlite::Val::call("namedItem", name).as<jsbind::Any>();
}

jsbind::Any HTMLAllCollection::item() {
    return emlite::Val::call("item").as<jsbind::Any>();
}

jsbind::Any HTMLAllCollection::item(const jsbind::String& nameOrIndex) {
    return emlite::Val::call("item", nameOrIndex).as<jsbind::Any>();
}


} // namespace webbind