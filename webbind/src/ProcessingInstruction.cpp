#include <webbind/ProcessingInstruction.hpp>
#include <webbind/CSSStyleSheet.hpp>

namespace webbind {

ProcessingInstruction ProcessingInstruction::take_ownership(Handle h) noexcept {
        return ProcessingInstruction(h);
    }
ProcessingInstruction ProcessingInstruction::clone() const noexcept { return *this; }
emlite::Val ProcessingInstruction::instance() noexcept { return emlite::Val::global("ProcessingInstruction"); }
ProcessingInstruction::ProcessingInstruction(Handle h) noexcept : CharacterData(emlite::Val::take_ownership(h)) {}
ProcessingInstruction::ProcessingInstruction(const emlite::Val &val) noexcept: CharacterData(val) {}

jsbind::String ProcessingInstruction::target() const {
    return CharacterData::get("target").as<jsbind::String>();
}

CSSStyleSheet ProcessingInstruction::sheet() const {
    return CharacterData::get("sheet").as<CSSStyleSheet>();
}


} // namespace webbind