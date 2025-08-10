#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CharacterData.hpp"

namespace webbind {

class CSSStyleSheet;

/// Interface ProcessingInstruction
/// [`ProcessingInstruction`](https://developer.mozilla.org/en-US/docs/Web/API/ProcessingInstruction)
class ProcessingInstruction : public CharacterData {
    explicit ProcessingInstruction(Handle h) noexcept;
public:
    explicit ProcessingInstruction(const emlite::Val &val) noexcept;
    static ProcessingInstruction take_ownership(Handle h) noexcept;
    [[nodiscard]] ProcessingInstruction clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `target` attribute.
    /// [`ProcessingInstruction.target`](https://developer.mozilla.org/en-US/docs/Web/API/ProcessingInstruction/target)
    [[nodiscard]] jsbind::String target() const;
    /// Getter of the `sheet` attribute.
    /// [`ProcessingInstruction.sheet`](https://developer.mozilla.org/en-US/docs/Web/API/ProcessingInstruction/sheet)
    [[nodiscard]] CSSStyleSheet sheet() const;
};

} // namespace webbind