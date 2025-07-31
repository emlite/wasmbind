#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PreferenceObject;


/// The PreferenceManager class.
/// [`PreferenceManager`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager)
class PreferenceManager : public emlite::Val {
    explicit PreferenceManager(Handle h) noexcept;

public:
    explicit PreferenceManager(const emlite::Val &val) noexcept;
    static PreferenceManager take_ownership(Handle h) noexcept;

    [[nodiscard]] PreferenceManager clone() const noexcept;
    /// Getter of the `colorScheme` attribute.
    /// [`PreferenceManager.colorScheme`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/colorScheme)
    [[nodiscard]] PreferenceObject colorScheme() const;
    /// Getter of the `contrast` attribute.
    /// [`PreferenceManager.contrast`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/contrast)
    [[nodiscard]] PreferenceObject contrast() const;
    /// Getter of the `reducedMotion` attribute.
    /// [`PreferenceManager.reducedMotion`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/reducedMotion)
    [[nodiscard]] PreferenceObject reducedMotion() const;
    /// Getter of the `reducedTransparency` attribute.
    /// [`PreferenceManager.reducedTransparency`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/reducedTransparency)
    [[nodiscard]] PreferenceObject reducedTransparency() const;
    /// Getter of the `reducedData` attribute.
    /// [`PreferenceManager.reducedData`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager/reducedData)
    [[nodiscard]] PreferenceObject reducedData() const;
};

