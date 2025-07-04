#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CharacterData.hpp"
#include "enums.hpp"

class CSSStyleSheet;


class ProcessingInstruction : public CharacterData {
    explicit ProcessingInstruction(Handle h) noexcept;

public:
    explicit ProcessingInstruction(const emlite::Val &val) noexcept;
    static ProcessingInstruction take_ownership(Handle h) noexcept;

    ProcessingInstruction clone() const noexcept;
    jsbind::DOMString target() const;
    CSSStyleSheet sheet() const;
};

