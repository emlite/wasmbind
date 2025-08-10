#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PromptResponseObject
class PromptResponseObject : public emlite::Val {
  explicit PromptResponseObject(Handle h) noexcept;
public:
    static PromptResponseObject take_ownership(Handle h) noexcept;
    explicit PromptResponseObject(const emlite::Val &val) noexcept;
    PromptResponseObject() noexcept;
    [[nodiscard]] PromptResponseObject clone() const noexcept;
    /// Getter of the `userChoice` attribute.
    [[nodiscard]] AppBannerPromptOutcome userChoice() const;
    /// Setter of the `userChoice` attribute.
    void userChoice(const AppBannerPromptOutcome& value);
};

} // namespace webbind