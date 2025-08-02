#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DocumentFragment.hpp"
#include "Element.hpp"
#include "enums.hpp"

class Element;
class Animation;


/// The ShadowRoot class.
/// [`ShadowRoot`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot)
class ShadowRoot : public DocumentFragment {
    explicit ShadowRoot(Handle h) noexcept;

public:
    explicit ShadowRoot(const emlite::Val &val) noexcept;
    static ShadowRoot take_ownership(Handle h) noexcept;

    [[nodiscard]] ShadowRoot clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `mode` attribute.
    /// [`ShadowRoot.mode`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/mode)
    [[nodiscard]] ShadowRootMode mode() const;
    /// Getter of the `delegatesFocus` attribute.
    /// [`ShadowRoot.delegatesFocus`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/delegatesFocus)
    [[nodiscard]] bool delegatesFocus() const;
    /// Getter of the `slotAssignment` attribute.
    /// [`ShadowRoot.slotAssignment`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/slotAssignment)
    [[nodiscard]] SlotAssignmentMode slotAssignment() const;
    /// Getter of the `clonable` attribute.
    /// [`ShadowRoot.clonable`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/clonable)
    [[nodiscard]] bool clonable() const;
    /// Getter of the `serializable` attribute.
    /// [`ShadowRoot.serializable`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/serializable)
    [[nodiscard]] bool serializable() const;
    /// Getter of the `host` attribute.
    /// [`ShadowRoot.host`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/host)
    [[nodiscard]] Element host() const;
    /// Getter of the `onslotchange` attribute.
    /// [`ShadowRoot.onslotchange`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/onslotchange)
    [[nodiscard]] jsbind::Any onslotchange() const;
    /// Setter of the `onslotchange` attribute.
    /// [`ShadowRoot.onslotchange`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/onslotchange)
    void onslotchange(const jsbind::Any& value);
    /// The setHTMLUnsafe method.
    /// [`ShadowRoot.setHTMLUnsafe`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/setHTMLUnsafe)
    jsbind::Undefined setHTMLUnsafe(const jsbind::Any& html);
    /// The getHTML method.
    /// [`ShadowRoot.getHTML`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/getHTML)
    jsbind::String getHTML();
    /// The getHTML method.
    /// [`ShadowRoot.getHTML`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/getHTML)
    jsbind::String getHTML(const GetHTMLOptions& options);
    /// Getter of the `innerHTML` attribute.
    /// [`ShadowRoot.innerHTML`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/innerHTML)
    [[nodiscard]] jsbind::Any innerHTML() const;
    /// Setter of the `innerHTML` attribute.
    /// [`ShadowRoot.innerHTML`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/innerHTML)
    void innerHTML(const jsbind::Any& value);
    /// The getAnimations method.
    /// [`ShadowRoot.getAnimations`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/getAnimations)
    jsbind::TypedArray<Animation> getAnimations();
};

