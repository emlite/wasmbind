#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DocumentFragment.hpp"
#include "GetHTMLOptions.hpp"
#include "enums.hpp"

namespace webbind {

class Element;
class Animation;

/// Interface ShadowRoot
/// [`ShadowRoot`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot)
class ShadowRoot : public DocumentFragment {
    explicit ShadowRoot(Handle h) noexcept;
public:
    explicit ShadowRoot(const emlite::Val &val) noexcept;
    static ShadowRoot take_ownership(Handle h) noexcept;
    [[nodiscard]] ShadowRoot clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`ShadowRoot.mode`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/mode)
    /// [`ShadowRoot.mode`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/mode)
    [[nodiscard]] ShadowRootMode mode() const;
    /// [`ShadowRoot.delegatesFocus`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/delegatesFocus)
    /// [`ShadowRoot.delegatesFocus`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/delegatesFocus)
    [[nodiscard]] bool delegatesFocus() const;
    /// [`ShadowRoot.slotAssignment`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/slotAssignment)
    /// [`ShadowRoot.slotAssignment`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/slotAssignment)
    [[nodiscard]] SlotAssignmentMode slotAssignment() const;
    /// [`ShadowRoot.clonable`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/clonable)
    /// [`ShadowRoot.clonable`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/clonable)
    [[nodiscard]] bool clonable() const;
    /// [`ShadowRoot.serializable`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/serializable)
    /// [`ShadowRoot.serializable`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/serializable)
    [[nodiscard]] bool serializable() const;
    /// [`ShadowRoot.host`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/host)
    /// [`ShadowRoot.host`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/host)
    [[nodiscard]] Element host() const;
    /// [`ShadowRoot.onslotchange`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/onslotchange)
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
    /// [`ShadowRoot.innerHTML`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/innerHTML)
    /// [`ShadowRoot.innerHTML`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/innerHTML)
    [[nodiscard]] jsbind::Any innerHTML() const;
    /// Setter of the `innerHTML` attribute.
    /// [`ShadowRoot.innerHTML`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/innerHTML)
    void innerHTML(const jsbind::Any& value);
    /// The getAnimations method.
    /// [`ShadowRoot.getAnimations`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot/getAnimations)
    jsbind::TypedArray<Animation> getAnimations();
};

} // namespace webbind