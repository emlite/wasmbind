#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PromptResponseObject
/// [`PromptResponseObject`](https://developer.mozilla.org/en-US/docs/Web/API/PromptResponseObject)
class PromptResponseObject : public emlite::Val {
  explicit PromptResponseObject(Handle h) noexcept;
public:
    static PromptResponseObject take_ownership(Handle h) noexcept;
    explicit PromptResponseObject(const emlite::Val &val) noexcept;
    PromptResponseObject() noexcept;
    [[nodiscard]] PromptResponseObject clone() const noexcept;
    [[nodiscard]] AppBannerPromptOutcome userChoice() const;
    void userChoice(const AppBannerPromptOutcome& value);
};

} // namespace webbind