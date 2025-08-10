#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMRectReadOnly;
class Landmark;

/// Dictionary type DetectedFace
class DetectedFace : public emlite::Val {
  explicit DetectedFace(Handle h) noexcept;
public:
    static DetectedFace take_ownership(Handle h) noexcept;
    explicit DetectedFace(const emlite::Val &val) noexcept;
    DetectedFace() noexcept;
    [[nodiscard]] DetectedFace clone() const noexcept;
    /// Getter of the `boundingBox` attribute.
    [[nodiscard]] DOMRectReadOnly boundingBox() const;
    /// Setter of the `boundingBox` attribute.
    void boundingBox(const DOMRectReadOnly& value);
    /// Getter of the `landmarks` attribute.
    [[nodiscard]] jsbind::TypedArray<Landmark> landmarks() const;
    /// Setter of the `landmarks` attribute.
    void landmarks(const jsbind::TypedArray<Landmark>& value);
};

} // namespace webbind