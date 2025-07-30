#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class DOMRect;
class HTMLElement;


class EditContext : public EventTarget {
    explicit EditContext(Handle h) noexcept;

public:
    explicit EditContext(const emlite::Val &val) noexcept;
    static EditContext take_ownership(Handle h) noexcept;

    EditContext clone() const noexcept;
    EditContext();
    EditContext(const jsbind::Any& options);
    jsbind::Undefined updateText(unsigned long rangeStart, unsigned long rangeEnd, const jsbind::String& text);
    jsbind::Undefined updateSelection(unsigned long start, unsigned long end);
    jsbind::Undefined updateControlBounds(const DOMRect& controlBounds);
    jsbind::Undefined updateSelectionBounds(const DOMRect& selectionBounds);
    jsbind::Undefined updateCharacterBounds(unsigned long rangeStart, const jsbind::TypedArray<DOMRect>& characterBounds);
    jsbind::TypedArray<HTMLElement> attachedElements();
    jsbind::String text() const;
    unsigned long selectionStart() const;
    unsigned long selectionEnd() const;
    unsigned long characterBoundsRangeStart() const;
    jsbind::TypedArray<DOMRect> characterBounds();
    jsbind::Any ontextupdate() const;
    void ontextupdate(const jsbind::Any& value);
    jsbind::Any ontextformatupdate() const;
    void ontextformatupdate(const jsbind::Any& value);
    jsbind::Any oncharacterboundsupdate() const;
    void oncharacterboundsupdate(const jsbind::Any& value);
    jsbind::Any oncompositionstart() const;
    void oncompositionstart(const jsbind::Any& value);
    jsbind::Any oncompositionend() const;
    void oncompositionend(const jsbind::Any& value);
};

