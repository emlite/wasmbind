#include <webbind/HTMLAllCollection.hpp>
#include <webbind/Element.hpp>


HTMLAllCollection HTMLAllCollection::take_ownership(Handle h) noexcept {
        return HTMLAllCollection(h);
    }
HTMLAllCollection HTMLAllCollection::clone() const noexcept { return *this; }
HTMLAllCollection::HTMLAllCollection(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HTMLAllCollection::HTMLAllCollection(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long HTMLAllCollection::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

jsbind::Any HTMLAllCollection::namedItem(const jsbind::DOMString& name) {
    return emlite::Val::call("namedItem", name).as<jsbind::Any>();
}

jsbind::Any HTMLAllCollection::item(const jsbind::DOMString& nameOrIndex) {
    return emlite::Val::call("item", nameOrIndex).as<jsbind::Any>();
}

