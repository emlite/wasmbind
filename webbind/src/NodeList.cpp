#include <webbind/NodeList.hpp>
#include <webbind/Node.hpp>


NodeList NodeList::take_ownership(Handle h) noexcept {
        return NodeList(h);
    }
NodeList NodeList::clone() const noexcept { return *this; }
emlite::Val NodeList::instance() noexcept { return emlite::Val::global("NodeList"); }
NodeList::NodeList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NodeList::NodeList(const emlite::Val &val) noexcept: emlite::Val(val) {}


Node NodeList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<Node>();
}

unsigned long NodeList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

