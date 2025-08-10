#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Landmark.hpp"

namespace webbind {

class DOMRectReadOnly;

/// Dictionary type DetectedFace
/// [`DetectedFace`](https://developer.mozilla.org/en-US/docs/Web/API/DetectedFace)
class DetectedFace : public emlite::Val {
  explicit DetectedFace(Handle h) noexcept;
public:
    static DetectedFace take_ownership(Handle h) noexcept;
    explicit DetectedFace(const emlite::Val &val) noexcept;
    DetectedFace() noexcept;
    [[nodiscard]] DetectedFace clone() const noexcept;
    [[nodiscard]] DOMRectReadOnly boundingBox() const;
    void boundingBox(const DOMRectReadOnly& value);
    [[nodiscard]] jsbind::TypedArray<Landmark> landmarks() const;
    void landmarks(const jsbind::TypedArray<Landmark>& value);
};

} // namespace webbind