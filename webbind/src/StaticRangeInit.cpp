#include <webbind/StaticRangeInit.hpp>
#include <webbind/Node.hpp>

namespace webbind {

StaticRangeInit::StaticRangeInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StaticRangeInit StaticRangeInit::take_ownership(Handle h) noexcept {
    return StaticRangeInit(h);
}

StaticRangeInit::StaticRangeInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

StaticRangeInit::StaticRangeInit() noexcept: emlite::Val(emlite::Val::object()) {}

StaticRangeInit StaticRangeInit::clone() const noexcept { return *this; }

Node StaticRangeInit::startContainer() const {
    return emlite::Val::get("startContainer").as<Node>();
}

void StaticRangeInit::startContainer(const Node& value) {
    emlite::Val::set("startContainer", value);
}

unsigned long StaticRangeInit::startOffset() const {
    return emlite::Val::get("startOffset").as<unsigned long>();
}

void StaticRangeInit::startOffset(unsigned long value) {
    emlite::Val::set("startOffset", value);
}

Node StaticRangeInit::endContainer() const {
    return emlite::Val::get("endContainer").as<Node>();
}

void StaticRangeInit::endContainer(const Node& value) {
    emlite::Val::set("endContainer", value);
}

unsigned long StaticRangeInit::endOffset() const {
    return emlite::Val::get("endOffset").as<unsigned long>();
}

void StaticRangeInit::endOffset(unsigned long value) {
    emlite::Val::set("endOffset", value);
}


} // namespace webbind