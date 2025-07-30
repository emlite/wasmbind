#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class HandwritingStroke;
class HandwritingPrediction;


class HandwritingPrediction : public emlite::Val {
  explicit HandwritingPrediction(Handle h) noexcept;
public:
    static HandwritingPrediction take_ownership(Handle h) noexcept;
    explicit HandwritingPrediction(const emlite::Val &val) noexcept;
    HandwritingPrediction() noexcept;
    HandwritingPrediction clone() const noexcept;
    jsbind::String text() const;
    void text(const jsbind::String& value);
    jsbind::TypedArray<jsbind::Any> segmentationResult() const;
    void segmentationResult(const jsbind::TypedArray<jsbind::Any>& value);
};

class HandwritingDrawing : public emlite::Val {
    explicit HandwritingDrawing(Handle h) noexcept;

public:
    explicit HandwritingDrawing(const emlite::Val &val) noexcept;
    static HandwritingDrawing take_ownership(Handle h) noexcept;

    HandwritingDrawing clone() const noexcept;
    jsbind::Undefined addStroke(const HandwritingStroke& stroke);
    jsbind::Undefined removeStroke(const HandwritingStroke& stroke);
    jsbind::Undefined clear();
    jsbind::TypedArray<HandwritingStroke> getStrokes();
    jsbind::Promise<jsbind::TypedArray<HandwritingPrediction>> getPrediction();
};

