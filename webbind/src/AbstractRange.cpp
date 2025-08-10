#include "webbind/AbstractRange.hpp"
#include "webbind/Node.hpp"

namespace webbind {

AbstractRange AbstractRange::take_ownership(Handle h) noexcept {
        return AbstractRange(h);
    }
AbstractRange AbstractRange::clone() const noexcept { return *this; }
emlite::Val AbstractRange::instance() noexcept { return emlite::Val::global("AbstractRange"); }
AbstractRange::AbstractRange(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AbstractRange::AbstractRange(const emlite::Val &val) noexcept: emlite::Val(val) {}

Node AbstractRange::startContainer() const {
    return emlite::Val::get("startContainer").as<Node>();
}

unsigned long AbstractRange::startOffset() const {
    return emlite::Val::get("startOffset").as<unsigned long>();
}

Node AbstractRange::endContainer() const {
    return emlite::Val::get("endContainer").as<Node>();
}

unsigned long AbstractRange::endOffset() const {
    return emlite::Val::get("endOffset").as<unsigned long>();
}

bool AbstractRange::collapsed() const {
    return emlite::Val::get("collapsed").as<bool>();
}


} // namespace webbind