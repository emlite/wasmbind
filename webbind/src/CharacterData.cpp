#include "webbind/CharacterData.hpp"
#include "webbind/Element.hpp"

namespace webbind {

CharacterData CharacterData::take_ownership(Handle h) noexcept {
        return CharacterData(h);
    }
CharacterData CharacterData::clone() const noexcept { return *this; }
emlite::Val CharacterData::instance() noexcept { return emlite::Val::global("CharacterData"); }
CharacterData::CharacterData(Handle h) noexcept : Node(emlite::Val::take_ownership(h)) {}
CharacterData::CharacterData(const emlite::Val &val) noexcept: Node(val) {}

jsbind::String CharacterData::data() const {
    return Node::get("data").as<jsbind::String>();
}

void CharacterData::data(const jsbind::String& value) {
    Node::set("data", value);
}

unsigned long CharacterData::length() const {
    return Node::get("length").as<unsigned long>();
}

jsbind::String CharacterData::substringData(unsigned long offset, unsigned long count) {
    return Node::call("substringData", offset, count).as<jsbind::String>();
}

jsbind::Undefined CharacterData::appendData(const jsbind::String& data) {
    return Node::call("appendData", data).as<jsbind::Undefined>();
}

jsbind::Undefined CharacterData::insertData(unsigned long offset, const jsbind::String& data) {
    return Node::call("insertData", offset, data).as<jsbind::Undefined>();
}

jsbind::Undefined CharacterData::deleteData(unsigned long offset, unsigned long count) {
    return Node::call("deleteData", offset, count).as<jsbind::Undefined>();
}

jsbind::Undefined CharacterData::replaceData(unsigned long offset, unsigned long count, const jsbind::String& data) {
    return Node::call("replaceData", offset, count, data).as<jsbind::Undefined>();
}

Element CharacterData::previousElementSibling() const {
    return Node::get("previousElementSibling").as<Element>();
}

Element CharacterData::nextElementSibling() const {
    return Node::get("nextElementSibling").as<Element>();
}

jsbind::Undefined CharacterData::before(const jsbind::Any& nodes) {
    return Node::call("before", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined CharacterData::after(const jsbind::Any& nodes) {
    return Node::call("after", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined CharacterData::replaceWith(const jsbind::Any& nodes) {
    return Node::call("replaceWith", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined CharacterData::remove() {
    return Node::call("remove").as<jsbind::Undefined>();
}


} // namespace webbind