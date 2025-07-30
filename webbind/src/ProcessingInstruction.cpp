#include <webbind/ProcessingInstruction.hpp>
#include <webbind/CSSStyleSheet.hpp>


ProcessingInstruction ProcessingInstruction::take_ownership(Handle h) noexcept {
        return ProcessingInstruction(h);
    }
ProcessingInstruction ProcessingInstruction::clone() const noexcept { return *this; }
ProcessingInstruction::ProcessingInstruction(Handle h) noexcept : CharacterData(emlite::Val::take_ownership(h)) {}
ProcessingInstruction::ProcessingInstruction(const emlite::Val &val) noexcept: CharacterData(val) {}


jsbind::String ProcessingInstruction::target() const {
    return CharacterData::get("target").as<jsbind::String>();
}

CSSStyleSheet ProcessingInstruction::sheet() const {
    return CharacterData::get("sheet").as<CSSStyleSheet>();
}

