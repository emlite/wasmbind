#include "webbind/PromptResponseObject.hpp"

using emlite::Val;
namespace webbind {

PromptResponseObject::PromptResponseObject(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PromptResponseObject PromptResponseObject::take_ownership(Handle h) noexcept {
        return PromptResponseObject(h);
    }
PromptResponseObject::PromptResponseObject(const emlite::Val &val) noexcept: emlite::Val(val) {}
PromptResponseObject::PromptResponseObject() noexcept: emlite::Val(emlite::Val::object()) {}
PromptResponseObject PromptResponseObject::clone() const noexcept { return *this; }

AppBannerPromptOutcome PromptResponseObject::userChoice() const {
    return emlite::Val::get("userChoice").as<AppBannerPromptOutcome>();
}

void PromptResponseObject::userChoice(const AppBannerPromptOutcome& value) {
    emlite::Val::set("userChoice", value);
}


} // namespace webbind