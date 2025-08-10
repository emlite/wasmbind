#include "webbind/CaretPosition.hpp"
#include "webbind/Node.hpp"
#include "webbind/DOMRect.hpp"

namespace webbind {

CaretPosition CaretPosition::take_ownership(Handle h) noexcept {
        return CaretPosition(h);
    }
CaretPosition CaretPosition::clone() const noexcept { return *this; }
emlite::Val CaretPosition::instance() noexcept { return emlite::Val::global("CaretPosition"); }
CaretPosition::CaretPosition(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CaretPosition::CaretPosition(const emlite::Val &val) noexcept: emlite::Val(val) {}

Node CaretPosition::offsetNode() const {
    return emlite::Val::get("offsetNode").as<Node>();
}

unsigned long CaretPosition::offset() const {
    return emlite::Val::get("offset").as<unsigned long>();
}

DOMRect CaretPosition::getClientRect() {
    return emlite::Val::call("getClientRect").as<DOMRect>();
}


} // namespace webbind