#include <webbind/HTMLFormControlsCollection.hpp>

namespace webbind {

HTMLFormControlsCollection HTMLFormControlsCollection::take_ownership(Handle h) noexcept {
    return HTMLFormControlsCollection(h);
}

HTMLFormControlsCollection HTMLFormControlsCollection::clone() const noexcept { return *this; }

emlite::Val HTMLFormControlsCollection::instance() noexcept { return emlite::Val::global("HTMLFormControlsCollection"); }

HTMLFormControlsCollection::HTMLFormControlsCollection(Handle h) noexcept : HTMLCollection(emlite::Val::take_ownership(h)) {}

HTMLFormControlsCollection::HTMLFormControlsCollection(const emlite::Val &val) noexcept: HTMLCollection(val) {}

jsbind::Any HTMLFormControlsCollection::namedItem(const jsbind::String& name) {
    return HTMLCollection::call("namedItem", name).as<jsbind::Any>();
}


} // namespace webbind