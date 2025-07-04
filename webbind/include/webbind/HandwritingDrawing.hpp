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
    jsbind::DOMString text() const;
    void text(const jsbind::DOMString& value);
    jsbind::Sequence<jsbind::Any> segmentationResult() const;
    void segmentationResult(const jsbind::Sequence<jsbind::Any>& value);
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
    jsbind::Sequence<HandwritingStroke> getStrokes();
    jsbind::Promise getPrediction();
};

