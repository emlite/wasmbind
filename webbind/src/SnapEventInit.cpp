#include <webbind/SnapEventInit.hpp>
#include <webbind/Node.hpp>

using emlite::Val;
namespace webbind {

SnapEventInit::SnapEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
SnapEventInit SnapEventInit::take_ownership(Handle h) noexcept {
        return SnapEventInit(h);
    }
SnapEventInit::SnapEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
SnapEventInit::SnapEventInit() noexcept: EventInit(emlite::Val::object()) {}
SnapEventInit SnapEventInit::clone() const noexcept { return *this; }

Node SnapEventInit::snapTargetBlock() const {
    return emlite::Val::get("snapTargetBlock").as<Node>();
}

void SnapEventInit::snapTargetBlock(const Node& value) {
    emlite::Val::set("snapTargetBlock", value);
}

Node SnapEventInit::snapTargetInline() const {
    return emlite::Val::get("snapTargetInline").as<Node>();
}

void SnapEventInit::snapTargetInline(const Node& value) {
    emlite::Val::set("snapTargetInline", value);
}


} // namespace webbind