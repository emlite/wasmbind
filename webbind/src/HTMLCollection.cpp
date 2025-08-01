#include <webbind/HTMLCollection.hpp>
#include <webbind/Element.hpp>


HTMLCollection HTMLCollection::take_ownership(Handle h) noexcept {
        return HTMLCollection(h);
    }
HTMLCollection HTMLCollection::clone() const noexcept { return *this; }
HTMLCollection::HTMLCollection(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HTMLCollection::HTMLCollection(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long HTMLCollection::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

Element HTMLCollection::item(unsigned long index) {
    return emlite::Val::call("item", index).as<Element>();
}

Element HTMLCollection::namedItem(const jsbind::String& name) {
    return emlite::Val::call("namedItem", name).as<Element>();
}

