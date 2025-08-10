#include "webbind/LayoutEdges.hpp"

namespace webbind {

LayoutEdges LayoutEdges::take_ownership(Handle h) noexcept {
        return LayoutEdges(h);
    }
LayoutEdges LayoutEdges::clone() const noexcept { return *this; }
emlite::Val LayoutEdges::instance() noexcept { return emlite::Val::global("LayoutEdges"); }
LayoutEdges::LayoutEdges(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LayoutEdges::LayoutEdges(const emlite::Val &val) noexcept: emlite::Val(val) {}

double LayoutEdges::inlineStart() const {
    return emlite::Val::get("inlineStart").as<double>();
}

double LayoutEdges::inlineEnd() const {
    return emlite::Val::get("inlineEnd").as<double>();
}

double LayoutEdges::blockStart() const {
    return emlite::Val::get("blockStart").as<double>();
}

double LayoutEdges::blockEnd() const {
    return emlite::Val::get("blockEnd").as<double>();
}

double LayoutEdges::inline_() const {
    return emlite::Val::get("inline").as<double>();
}

double LayoutEdges::block() const {
    return emlite::Val::get("block").as<double>();
}


} // namespace webbind