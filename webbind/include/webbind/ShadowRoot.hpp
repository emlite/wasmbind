#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DocumentFragment.hpp"
#include "Element.hpp"
#include "enums.hpp"

class Element;
class Animation;


class ShadowRoot : public DocumentFragment {
    explicit ShadowRoot(Handle h) noexcept;

public:
    explicit ShadowRoot(const emlite::Val &val) noexcept;
    static ShadowRoot take_ownership(Handle h) noexcept;

    ShadowRoot clone() const noexcept;
    ShadowRootMode mode() const;
    bool delegatesFocus() const;
    SlotAssignmentMode slotAssignment() const;
    bool clonable() const;
    bool serializable() const;
    Element host() const;
    jsbind::Any onslotchange() const;
    void onslotchange(const jsbind::Any& value);
    jsbind::Undefined setHTMLUnsafe(const jsbind::Any& html);
    jsbind::DOMString getHTML(const GetHTMLOptions& options);
    jsbind::Any innerHTML() const;
    void innerHTML(const jsbind::Any& value);
    jsbind::Sequence<Animation> getAnimations();
};

