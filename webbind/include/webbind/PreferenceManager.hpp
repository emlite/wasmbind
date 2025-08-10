#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class PreferenceObject;

/// Interface PreferenceManager
/// [`PreferenceManager`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager)
class PreferenceManager : public emlite::Val {
    explicit PreferenceManager(Handle h) noexcept;
public:
    explicit PreferenceManager(const emlite::Val &val) noexcept;
    static PreferenceManager take_ownership(Handle h) noexcept;
    [[nodiscard]] PreferenceManager clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`PreferenceManager.colorScheme`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/colorScheme)
    /// [`PreferenceManager.colorScheme`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/colorScheme)
    [[nodiscard]] PreferenceObject colorScheme() const;
    /// [`PreferenceManager.contrast`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/contrast)
    /// [`PreferenceManager.contrast`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/contrast)
    [[nodiscard]] PreferenceObject contrast() const;
    /// [`PreferenceManager.reducedMotion`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/reducedMotion)
    /// [`PreferenceManager.reducedMotion`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/reducedMotion)
    [[nodiscard]] PreferenceObject reducedMotion() const;
    /// [`PreferenceManager.reducedTransparency`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/reducedTransparency)
    /// [`PreferenceManager.reducedTransparency`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/reducedTransparency)
    [[nodiscard]] PreferenceObject reducedTransparency() const;
    /// [`PreferenceManager.reducedData`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/reducedData)
    /// [`PreferenceManager.reducedData`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/reducedData)
    [[nodiscard]] PreferenceObject reducedData() const;
};

} // namespace webbind