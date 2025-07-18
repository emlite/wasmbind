#include <webbind/AnimationNodeList.hpp>
#include <webbind/AnimationEffect.hpp>


AnimationNodeList AnimationNodeList::take_ownership(Handle h) noexcept {
        return AnimationNodeList(h);
    }
AnimationNodeList AnimationNodeList::clone() const noexcept { return *this; }
AnimationNodeList::AnimationNodeList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AnimationNodeList::AnimationNodeList(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long AnimationNodeList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

AnimationEffect AnimationNodeList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<AnimationEffect>();
}

