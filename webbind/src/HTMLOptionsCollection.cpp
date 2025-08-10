#include <webbind/HTMLOptionsCollection.hpp>
#include <webbind/HTMLOptionElement.hpp>

namespace webbind {

HTMLOptionsCollection HTMLOptionsCollection::take_ownership(Handle h) noexcept {
        return HTMLOptionsCollection(h);
    }
HTMLOptionsCollection HTMLOptionsCollection::clone() const noexcept { return *this; }
emlite::Val HTMLOptionsCollection::instance() noexcept { return emlite::Val::global("HTMLOptionsCollection"); }
HTMLOptionsCollection::HTMLOptionsCollection(Handle h) noexcept : HTMLCollection(emlite::Val::take_ownership(h)) {}
HTMLOptionsCollection::HTMLOptionsCollection(const emlite::Val &val) noexcept: HTMLCollection(val) {}

unsigned long HTMLOptionsCollection::length() const {
    return HTMLCollection::get("length").as<unsigned long>();
}

void HTMLOptionsCollection::length(unsigned long value) {
    HTMLCollection::set("length", value);
}

jsbind::Undefined HTMLOptionsCollection::add(const jsbind::Any& element) {
    return HTMLCollection::call("add", element).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLOptionsCollection::add(const jsbind::Any& element, const jsbind::Any& before) {
    return HTMLCollection::call("add", element, before).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLOptionsCollection::remove(long index) {
    return HTMLCollection::call("remove", index).as<jsbind::Undefined>();
}

long HTMLOptionsCollection::selectedIndex() const {
    return HTMLCollection::get("selectedIndex").as<long>();
}

void HTMLOptionsCollection::selectedIndex(long value) {
    HTMLCollection::set("selectedIndex", value);
}


} // namespace webbind