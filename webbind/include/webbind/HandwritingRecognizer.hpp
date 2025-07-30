#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class HandwritingDrawing;
class HandwritingHints;


class HandwritingHints : public emlite::Val {
  explicit HandwritingHints(Handle h) noexcept;
public:
    static HandwritingHints take_ownership(Handle h) noexcept;
    explicit HandwritingHints(const emlite::Val &val) noexcept;
    HandwritingHints() noexcept;
    HandwritingHints clone() const noexcept;
    jsbind::String recognitionType() const;
    void recognitionType(const jsbind::String& value);
    jsbind::String inputType() const;
    void inputType(const jsbind::String& value);
    jsbind::String textContext() const;
    void textContext(const jsbind::String& value);
    unsigned long alternatives() const;
    void alternatives(unsigned long value);
};

class HandwritingRecognizer : public emlite::Val {
    explicit HandwritingRecognizer(Handle h) noexcept;

public:
    explicit HandwritingRecognizer(const emlite::Val &val) noexcept;
    static HandwritingRecognizer take_ownership(Handle h) noexcept;

    HandwritingRecognizer clone() const noexcept;
    HandwritingDrawing startDrawing();
    HandwritingDrawing startDrawing(const HandwritingHints& hints);
    jsbind::Undefined finish();
};

