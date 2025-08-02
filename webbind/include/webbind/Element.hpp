#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Node.hpp"
#include "enums.hpp"

class DOMTokenList;
class NamedNodeMap;
class Attr;
class ShadowRoot;
class ShadowRootInit;
class CustomElementRegistry;
class HTMLCollection;
class FocusableAreasOption;
class SpatialNavigationSearchOptions;
class CSSPseudoElement;
class StylePropertyMapReadOnly;
class DOMRectList;
class DOMRect;
class CheckVisibilityOptions;
class FullscreenOptions;
class GetHTMLOptions;
class PointerLockOptions;
class Range;
class DOMQuad;
class DOMRectReadOnly;
class DOMPoint;
class NodeList;
class HTMLSlotElement;
class Animation;
class GetAnimationsOptions;
class ScreenDetailed;
class ConvertCoordinateOptions;
class DOMPointInit;
class DOMQuadInit;
class BoxQuadOptions;


class ShadowRootInit : public emlite::Val {
  explicit ShadowRootInit(Handle h) noexcept;
public:
    static ShadowRootInit take_ownership(Handle h) noexcept;
    explicit ShadowRootInit(const emlite::Val &val) noexcept;
    ShadowRootInit() noexcept;
    [[nodiscard]] ShadowRootInit clone() const noexcept;
    [[nodiscard]] ShadowRootMode mode() const;
    void mode(const ShadowRootMode& value);
    [[nodiscard]] bool delegatesFocus() const;
    void delegatesFocus(bool value);
    [[nodiscard]] SlotAssignmentMode slotAssignment() const;
    void slotAssignment(const SlotAssignmentMode& value);
    [[nodiscard]] bool clonable() const;
    void clonable(bool value);
    [[nodiscard]] bool serializable() const;
    void serializable(bool value);
    [[nodiscard]] CustomElementRegistry customElementRegistry() const;
    void customElementRegistry(const CustomElementRegistry& value);
};

class FocusableAreasOption : public emlite::Val {
  explicit FocusableAreasOption(Handle h) noexcept;
public:
    static FocusableAreasOption take_ownership(Handle h) noexcept;
    explicit FocusableAreasOption(const emlite::Val &val) noexcept;
    FocusableAreasOption() noexcept;
    [[nodiscard]] FocusableAreasOption clone() const noexcept;
    [[nodiscard]] FocusableAreaSearchMode mode() const;
    void mode(const FocusableAreaSearchMode& value);
};

class SpatialNavigationSearchOptions : public emlite::Val {
  explicit SpatialNavigationSearchOptions(Handle h) noexcept;
public:
    static SpatialNavigationSearchOptions take_ownership(Handle h) noexcept;
    explicit SpatialNavigationSearchOptions(const emlite::Val &val) noexcept;
    SpatialNavigationSearchOptions() noexcept;
    [[nodiscard]] SpatialNavigationSearchOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<Node> candidates() const;
    void candidates(const jsbind::TypedArray<Node>& value);
    [[nodiscard]] Node container() const;
    void container(const Node& value);
};

class CheckVisibilityOptions : public emlite::Val {
  explicit CheckVisibilityOptions(Handle h) noexcept;
public:
    static CheckVisibilityOptions take_ownership(Handle h) noexcept;
    explicit CheckVisibilityOptions(const emlite::Val &val) noexcept;
    CheckVisibilityOptions() noexcept;
    [[nodiscard]] CheckVisibilityOptions clone() const noexcept;
    [[nodiscard]] bool checkOpacity() const;
    void checkOpacity(bool value);
    [[nodiscard]] bool checkVisibilityCSS() const;
    void checkVisibilityCSS(bool value);
    [[nodiscard]] bool contentVisibilityAuto() const;
    void contentVisibilityAuto(bool value);
    [[nodiscard]] bool opacityProperty() const;
    void opacityProperty(bool value);
    [[nodiscard]] bool visibilityProperty() const;
    void visibilityProperty(bool value);
};

class FullscreenOptions : public emlite::Val {
  explicit FullscreenOptions(Handle h) noexcept;
public:
    static FullscreenOptions take_ownership(Handle h) noexcept;
    explicit FullscreenOptions(const emlite::Val &val) noexcept;
    FullscreenOptions() noexcept;
    [[nodiscard]] FullscreenOptions clone() const noexcept;
    [[nodiscard]] ScreenDetailed screen() const;
    void screen(const ScreenDetailed& value);
};

class GetHTMLOptions : public emlite::Val {
  explicit GetHTMLOptions(Handle h) noexcept;
public:
    static GetHTMLOptions take_ownership(Handle h) noexcept;
    explicit GetHTMLOptions(const emlite::Val &val) noexcept;
    GetHTMLOptions() noexcept;
    [[nodiscard]] GetHTMLOptions clone() const noexcept;
    [[nodiscard]] bool serializableShadowRoots() const;
    void serializableShadowRoots(bool value);
    [[nodiscard]] jsbind::TypedArray<ShadowRoot> shadowRoots() const;
    void shadowRoots(const jsbind::TypedArray<ShadowRoot>& value);
};

class PointerLockOptions : public emlite::Val {
  explicit PointerLockOptions(Handle h) noexcept;
public:
    static PointerLockOptions take_ownership(Handle h) noexcept;
    explicit PointerLockOptions(const emlite::Val &val) noexcept;
    PointerLockOptions() noexcept;
    [[nodiscard]] PointerLockOptions clone() const noexcept;
    [[nodiscard]] bool unadjustedMovement() const;
    void unadjustedMovement(bool value);
};

class GetAnimationsOptions : public emlite::Val {
  explicit GetAnimationsOptions(Handle h) noexcept;
public:
    static GetAnimationsOptions take_ownership(Handle h) noexcept;
    explicit GetAnimationsOptions(const emlite::Val &val) noexcept;
    GetAnimationsOptions() noexcept;
    [[nodiscard]] GetAnimationsOptions clone() const noexcept;
    [[nodiscard]] bool subtree() const;
    void subtree(bool value);
    [[nodiscard]] jsbind::String pseudoElement() const;
    void pseudoElement(const jsbind::String& value);
};

/// The Element class.
/// [`Element`](https://developer.mozilla.org/en-US/docs/Web/API/Element)
class Element : public Node {
    explicit Element(Handle h) noexcept;

public:
    explicit Element(const emlite::Val &val) noexcept;
    static Element take_ownership(Handle h) noexcept;

    [[nodiscard]] Element clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `namespaceURI` attribute.
    /// [`Element.namespaceURI`](https://developer.mozilla.org/en-US/docs/Web/API/Element/namespaceURI)
    [[nodiscard]] jsbind::String namespaceURI() const;
    /// Getter of the `prefix` attribute.
    /// [`Element.prefix`](https://developer.mozilla.org/en-US/docs/Web/API/Element/prefix)
    [[nodiscard]] jsbind::String prefix() const;
    /// Getter of the `localName` attribute.
    /// [`Element.localName`](https://developer.mozilla.org/en-US/docs/Web/API/Element/localName)
    [[nodiscard]] jsbind::String localName() const;
    /// Getter of the `tagName` attribute.
    /// [`Element.tagName`](https://developer.mozilla.org/en-US/docs/Web/API/Element/tagName)
    [[nodiscard]] jsbind::String tagName() const;
    /// Getter of the `id` attribute.
    /// [`Element.id`](https://developer.mozilla.org/en-US/docs/Web/API/Element/id)
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    /// [`Element.id`](https://developer.mozilla.org/en-US/docs/Web/API/Element/id)
    void id(const jsbind::String& value);
    /// Getter of the `className` attribute.
    /// [`Element.className`](https://developer.mozilla.org/en-US/docs/Web/API/Element/className)
    [[nodiscard]] jsbind::String className() const;
    /// Setter of the `className` attribute.
    /// [`Element.className`](https://developer.mozilla.org/en-US/docs/Web/API/Element/className)
    void className(const jsbind::String& value);
    /// Getter of the `classList` attribute.
    /// [`Element.classList`](https://developer.mozilla.org/en-US/docs/Web/API/Element/classList)
    [[nodiscard]] DOMTokenList classList() const;
    /// Getter of the `slot` attribute.
    /// [`Element.slot`](https://developer.mozilla.org/en-US/docs/Web/API/Element/slot)
    [[nodiscard]] jsbind::String slot() const;
    /// Setter of the `slot` attribute.
    /// [`Element.slot`](https://developer.mozilla.org/en-US/docs/Web/API/Element/slot)
    void slot(const jsbind::String& value);
    /// The hasAttributes method.
    /// [`Element.hasAttributes`](https://developer.mozilla.org/en-US/docs/Web/API/Element/hasAttributes)
    bool hasAttributes();
    /// Getter of the `attributes` attribute.
    /// [`Element.attributes`](https://developer.mozilla.org/en-US/docs/Web/API/Element/attributes)
    [[nodiscard]] NamedNodeMap attributes() const;
    /// The getAttributeNames method.
    /// [`Element.getAttributeNames`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getAttributeNames)
    jsbind::TypedArray<jsbind::String> getAttributeNames();
    /// The getAttribute method.
    /// [`Element.getAttribute`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getAttribute)
    jsbind::String getAttribute(const jsbind::String& qualifiedName);
    /// The getAttributeNS method.
    /// [`Element.getAttributeNS`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getAttributeNS)
    jsbind::String getAttributeNS(const jsbind::String& namespace_, const jsbind::String& localName);
    /// The setAttribute method.
    /// [`Element.setAttribute`](https://developer.mozilla.org/en-US/docs/Web/API/Element/setAttribute)
    jsbind::Undefined setAttribute(const jsbind::String& qualifiedName, const jsbind::String& value);
    /// The setAttributeNS method.
    /// [`Element.setAttributeNS`](https://developer.mozilla.org/en-US/docs/Web/API/Element/setAttributeNS)
    jsbind::Undefined setAttributeNS(const jsbind::String& namespace_, const jsbind::String& qualifiedName, const jsbind::String& value);
    /// The removeAttribute method.
    /// [`Element.removeAttribute`](https://developer.mozilla.org/en-US/docs/Web/API/Element/removeAttribute)
    jsbind::Undefined removeAttribute(const jsbind::String& qualifiedName);
    /// The removeAttributeNS method.
    /// [`Element.removeAttributeNS`](https://developer.mozilla.org/en-US/docs/Web/API/Element/removeAttributeNS)
    jsbind::Undefined removeAttributeNS(const jsbind::String& namespace_, const jsbind::String& localName);
    /// The toggleAttribute method.
    /// [`Element.toggleAttribute`](https://developer.mozilla.org/en-US/docs/Web/API/Element/toggleAttribute)
    bool toggleAttribute(const jsbind::String& qualifiedName);
    /// The toggleAttribute method.
    /// [`Element.toggleAttribute`](https://developer.mozilla.org/en-US/docs/Web/API/Element/toggleAttribute)
    bool toggleAttribute(const jsbind::String& qualifiedName, bool force);
    /// The hasAttribute method.
    /// [`Element.hasAttribute`](https://developer.mozilla.org/en-US/docs/Web/API/Element/hasAttribute)
    bool hasAttribute(const jsbind::String& qualifiedName);
    /// The hasAttributeNS method.
    /// [`Element.hasAttributeNS`](https://developer.mozilla.org/en-US/docs/Web/API/Element/hasAttributeNS)
    bool hasAttributeNS(const jsbind::String& namespace_, const jsbind::String& localName);
    /// The getAttributeNode method.
    /// [`Element.getAttributeNode`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getAttributeNode)
    Attr getAttributeNode(const jsbind::String& qualifiedName);
    /// The getAttributeNodeNS method.
    /// [`Element.getAttributeNodeNS`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getAttributeNodeNS)
    Attr getAttributeNodeNS(const jsbind::String& namespace_, const jsbind::String& localName);
    /// The setAttributeNode method.
    /// [`Element.setAttributeNode`](https://developer.mozilla.org/en-US/docs/Web/API/Element/setAttributeNode)
    Attr setAttributeNode(const Attr& attr);
    /// The setAttributeNodeNS method.
    /// [`Element.setAttributeNodeNS`](https://developer.mozilla.org/en-US/docs/Web/API/Element/setAttributeNodeNS)
    Attr setAttributeNodeNS(const Attr& attr);
    /// The removeAttributeNode method.
    /// [`Element.removeAttributeNode`](https://developer.mozilla.org/en-US/docs/Web/API/Element/removeAttributeNode)
    Attr removeAttributeNode(const Attr& attr);
    /// The attachShadow method.
    /// [`Element.attachShadow`](https://developer.mozilla.org/en-US/docs/Web/API/Element/attachShadow)
    ShadowRoot attachShadow(const ShadowRootInit& init);
    /// Getter of the `shadowRoot` attribute.
    /// [`Element.shadowRoot`](https://developer.mozilla.org/en-US/docs/Web/API/Element/shadowRoot)
    [[nodiscard]] ShadowRoot shadowRoot() const;
    /// Getter of the `customElementRegistry` attribute.
    /// [`Element.customElementRegistry`](https://developer.mozilla.org/en-US/docs/Web/API/Element/customElementRegistry)
    [[nodiscard]] CustomElementRegistry customElementRegistry() const;
    /// The closest method.
    /// [`Element.closest`](https://developer.mozilla.org/en-US/docs/Web/API/Element/closest)
    Element closest(const jsbind::String& selectors);
    /// The matches method.
    /// [`Element.matches`](https://developer.mozilla.org/en-US/docs/Web/API/Element/matches)
    bool matches(const jsbind::String& selectors);
    /// The webkitMatchesSelector method.
    /// [`Element.webkitMatchesSelector`](https://developer.mozilla.org/en-US/docs/Web/API/Element/webkitMatchesSelector)
    bool webkitMatchesSelector(const jsbind::String& selectors);
    /// The getElementsByTagName method.
    /// [`Element.getElementsByTagName`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getElementsByTagName)
    HTMLCollection getElementsByTagName(const jsbind::String& qualifiedName);
    /// The getElementsByTagNameNS method.
    /// [`Element.getElementsByTagNameNS`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getElementsByTagNameNS)
    HTMLCollection getElementsByTagNameNS(const jsbind::String& namespace_, const jsbind::String& localName);
    /// The getElementsByClassName method.
    /// [`Element.getElementsByClassName`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getElementsByClassName)
    HTMLCollection getElementsByClassName(const jsbind::String& classNames);
    /// The insertAdjacentElement method.
    /// [`Element.insertAdjacentElement`](https://developer.mozilla.org/en-US/docs/Web/API/Element/insertAdjacentElement)
    Element insertAdjacentElement(const jsbind::String& where, const Element& element);
    /// The insertAdjacentText method.
    /// [`Element.insertAdjacentText`](https://developer.mozilla.org/en-US/docs/Web/API/Element/insertAdjacentText)
    jsbind::Undefined insertAdjacentText(const jsbind::String& where, const jsbind::String& data);
    /// The getSpatialNavigationContainer method.
    /// [`Element.getSpatialNavigationContainer`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getSpatialNavigationContainer)
    Node getSpatialNavigationContainer();
    /// The focusableAreas method.
    /// [`Element.focusableAreas`](https://developer.mozilla.org/en-US/docs/Web/API/Element/focusableAreas)
    jsbind::TypedArray<Node> focusableAreas();
    /// The focusableAreas method.
    /// [`Element.focusableAreas`](https://developer.mozilla.org/en-US/docs/Web/API/Element/focusableAreas)
    jsbind::TypedArray<Node> focusableAreas(const FocusableAreasOption& option);
    /// The spatialNavigationSearch method.
    /// [`Element.spatialNavigationSearch`](https://developer.mozilla.org/en-US/docs/Web/API/Element/spatialNavigationSearch)
    Node spatialNavigationSearch(const SpatialNavigationDirection& dir);
    /// The spatialNavigationSearch method.
    /// [`Element.spatialNavigationSearch`](https://developer.mozilla.org/en-US/docs/Web/API/Element/spatialNavigationSearch)
    Node spatialNavigationSearch(const SpatialNavigationDirection& dir, const SpatialNavigationSearchOptions& options);
    /// The pseudo method.
    /// [`Element.pseudo`](https://developer.mozilla.org/en-US/docs/Web/API/Element/pseudo)
    CSSPseudoElement pseudo(const jsbind::String& type);
    /// Getter of the `part` attribute.
    /// [`Element.part`](https://developer.mozilla.org/en-US/docs/Web/API/Element/part)
    [[nodiscard]] DOMTokenList part() const;
    /// The computedStyleMap method.
    /// [`Element.computedStyleMap`](https://developer.mozilla.org/en-US/docs/Web/API/Element/computedStyleMap)
    StylePropertyMapReadOnly computedStyleMap();
    /// The getClientRects method.
    /// [`Element.getClientRects`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getClientRects)
    DOMRectList getClientRects();
    /// The getBoundingClientRect method.
    /// [`Element.getBoundingClientRect`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getBoundingClientRect)
    DOMRect getBoundingClientRect();
    /// The checkVisibility method.
    /// [`Element.checkVisibility`](https://developer.mozilla.org/en-US/docs/Web/API/Element/checkVisibility)
    bool checkVisibility();
    /// The checkVisibility method.
    /// [`Element.checkVisibility`](https://developer.mozilla.org/en-US/docs/Web/API/Element/checkVisibility)
    bool checkVisibility(const CheckVisibilityOptions& options);
    /// The scrollIntoView method.
    /// [`Element.scrollIntoView`](https://developer.mozilla.org/en-US/docs/Web/API/Element/scrollIntoView)
    jsbind::Undefined scrollIntoView();
    /// The scrollIntoView method.
    /// [`Element.scrollIntoView`](https://developer.mozilla.org/en-US/docs/Web/API/Element/scrollIntoView)
    jsbind::Undefined scrollIntoView(const jsbind::Any& arg);
    /// The scroll method.
    /// [`Element.scroll`](https://developer.mozilla.org/en-US/docs/Web/API/Element/scroll)
    jsbind::Undefined scroll(double x, double y);
    /// The scrollTo method.
    /// [`Element.scrollTo`](https://developer.mozilla.org/en-US/docs/Web/API/Element/scrollTo)
    jsbind::Undefined scrollTo(double x, double y);
    /// The scrollBy method.
    /// [`Element.scrollBy`](https://developer.mozilla.org/en-US/docs/Web/API/Element/scrollBy)
    jsbind::Undefined scrollBy(double x, double y);
    /// Getter of the `scrollTop` attribute.
    /// [`Element.scrollTop`](https://developer.mozilla.org/en-US/docs/Web/API/Element/scrollTop)
    [[nodiscard]] double scrollTop() const;
    /// Setter of the `scrollTop` attribute.
    /// [`Element.scrollTop`](https://developer.mozilla.org/en-US/docs/Web/API/Element/scrollTop)
    void scrollTop(double value);
    /// Getter of the `scrollLeft` attribute.
    /// [`Element.scrollLeft`](https://developer.mozilla.org/en-US/docs/Web/API/Element/scrollLeft)
    [[nodiscard]] double scrollLeft() const;
    /// Setter of the `scrollLeft` attribute.
    /// [`Element.scrollLeft`](https://developer.mozilla.org/en-US/docs/Web/API/Element/scrollLeft)
    void scrollLeft(double value);
    /// Getter of the `scrollWidth` attribute.
    /// [`Element.scrollWidth`](https://developer.mozilla.org/en-US/docs/Web/API/Element/scrollWidth)
    [[nodiscard]] long scrollWidth() const;
    /// Getter of the `scrollHeight` attribute.
    /// [`Element.scrollHeight`](https://developer.mozilla.org/en-US/docs/Web/API/Element/scrollHeight)
    [[nodiscard]] long scrollHeight() const;
    /// Getter of the `clientTop` attribute.
    /// [`Element.clientTop`](https://developer.mozilla.org/en-US/docs/Web/API/Element/clientTop)
    [[nodiscard]] long clientTop() const;
    /// Getter of the `clientLeft` attribute.
    /// [`Element.clientLeft`](https://developer.mozilla.org/en-US/docs/Web/API/Element/clientLeft)
    [[nodiscard]] long clientLeft() const;
    /// Getter of the `clientWidth` attribute.
    /// [`Element.clientWidth`](https://developer.mozilla.org/en-US/docs/Web/API/Element/clientWidth)
    [[nodiscard]] long clientWidth() const;
    /// Getter of the `clientHeight` attribute.
    /// [`Element.clientHeight`](https://developer.mozilla.org/en-US/docs/Web/API/Element/clientHeight)
    [[nodiscard]] long clientHeight() const;
    /// Getter of the `currentCSSZoom` attribute.
    /// [`Element.currentCSSZoom`](https://developer.mozilla.org/en-US/docs/Web/API/Element/currentCSSZoom)
    [[nodiscard]] double currentCSSZoom() const;
    /// Getter of the `elementTiming` attribute.
    /// [`Element.elementTiming`](https://developer.mozilla.org/en-US/docs/Web/API/Element/elementTiming)
    [[nodiscard]] jsbind::String elementTiming() const;
    /// Setter of the `elementTiming` attribute.
    /// [`Element.elementTiming`](https://developer.mozilla.org/en-US/docs/Web/API/Element/elementTiming)
    void elementTiming(const jsbind::String& value);
    /// The requestFullscreen method.
    /// [`Element.requestFullscreen`](https://developer.mozilla.org/en-US/docs/Web/API/Element/requestFullscreen)
    jsbind::Promise<jsbind::Undefined> requestFullscreen();
    /// The requestFullscreen method.
    /// [`Element.requestFullscreen`](https://developer.mozilla.org/en-US/docs/Web/API/Element/requestFullscreen)
    jsbind::Promise<jsbind::Undefined> requestFullscreen(const FullscreenOptions& options);
    /// Getter of the `onfullscreenchange` attribute.
    /// [`Element.onfullscreenchange`](https://developer.mozilla.org/en-US/docs/Web/API/Element/onfullscreenchange)
    [[nodiscard]] jsbind::Any onfullscreenchange() const;
    /// Setter of the `onfullscreenchange` attribute.
    /// [`Element.onfullscreenchange`](https://developer.mozilla.org/en-US/docs/Web/API/Element/onfullscreenchange)
    void onfullscreenchange(const jsbind::Any& value);
    /// Getter of the `onfullscreenerror` attribute.
    /// [`Element.onfullscreenerror`](https://developer.mozilla.org/en-US/docs/Web/API/Element/onfullscreenerror)
    [[nodiscard]] jsbind::Any onfullscreenerror() const;
    /// Setter of the `onfullscreenerror` attribute.
    /// [`Element.onfullscreenerror`](https://developer.mozilla.org/en-US/docs/Web/API/Element/onfullscreenerror)
    void onfullscreenerror(const jsbind::Any& value);
    /// The setHTMLUnsafe method.
    /// [`Element.setHTMLUnsafe`](https://developer.mozilla.org/en-US/docs/Web/API/Element/setHTMLUnsafe)
    jsbind::Undefined setHTMLUnsafe(const jsbind::Any& html);
    /// The getHTML method.
    /// [`Element.getHTML`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getHTML)
    jsbind::String getHTML();
    /// The getHTML method.
    /// [`Element.getHTML`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getHTML)
    jsbind::String getHTML(const GetHTMLOptions& options);
    /// Getter of the `innerHTML` attribute.
    /// [`Element.innerHTML`](https://developer.mozilla.org/en-US/docs/Web/API/Element/innerHTML)
    [[nodiscard]] jsbind::Any innerHTML() const;
    /// Setter of the `innerHTML` attribute.
    /// [`Element.innerHTML`](https://developer.mozilla.org/en-US/docs/Web/API/Element/innerHTML)
    void innerHTML(const jsbind::Any& value);
    /// Getter of the `outerHTML` attribute.
    /// [`Element.outerHTML`](https://developer.mozilla.org/en-US/docs/Web/API/Element/outerHTML)
    [[nodiscard]] jsbind::Any outerHTML() const;
    /// Setter of the `outerHTML` attribute.
    /// [`Element.outerHTML`](https://developer.mozilla.org/en-US/docs/Web/API/Element/outerHTML)
    void outerHTML(const jsbind::Any& value);
    /// The insertAdjacentHTML method.
    /// [`Element.insertAdjacentHTML`](https://developer.mozilla.org/en-US/docs/Web/API/Element/insertAdjacentHTML)
    jsbind::Undefined insertAdjacentHTML(const jsbind::String& position, const jsbind::Any& string);
    /// The setPointerCapture method.
    /// [`Element.setPointerCapture`](https://developer.mozilla.org/en-US/docs/Web/API/Element/setPointerCapture)
    jsbind::Undefined setPointerCapture(long pointerId);
    /// The releasePointerCapture method.
    /// [`Element.releasePointerCapture`](https://developer.mozilla.org/en-US/docs/Web/API/Element/releasePointerCapture)
    jsbind::Undefined releasePointerCapture(long pointerId);
    /// The hasPointerCapture method.
    /// [`Element.hasPointerCapture`](https://developer.mozilla.org/en-US/docs/Web/API/Element/hasPointerCapture)
    bool hasPointerCapture(long pointerId);
    /// The requestPointerLock method.
    /// [`Element.requestPointerLock`](https://developer.mozilla.org/en-US/docs/Web/API/Element/requestPointerLock)
    jsbind::Promise<jsbind::Undefined> requestPointerLock();
    /// The requestPointerLock method.
    /// [`Element.requestPointerLock`](https://developer.mozilla.org/en-US/docs/Web/API/Element/requestPointerLock)
    jsbind::Promise<jsbind::Undefined> requestPointerLock(const PointerLockOptions& options);
    /// Getter of the `regionOverset` attribute.
    /// [`Element.regionOverset`](https://developer.mozilla.org/en-US/docs/Web/API/Element/regionOverset)
    [[nodiscard]] jsbind::String regionOverset() const;
    /// The getRegionFlowRanges method.
    /// [`Element.getRegionFlowRanges`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getRegionFlowRanges)
    jsbind::TypedArray<Range> getRegionFlowRanges();
    /// The getBoxQuads method.
    /// [`Element.getBoxQuads`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getBoxQuads)
    jsbind::TypedArray<DOMQuad> getBoxQuads();
    /// The getBoxQuads method.
    /// [`Element.getBoxQuads`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getBoxQuads)
    jsbind::TypedArray<DOMQuad> getBoxQuads(const BoxQuadOptions& options);
    /// The convertQuadFromNode method.
    /// [`Element.convertQuadFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Element/convertQuadFromNode)
    DOMQuad convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from);
    /// The convertQuadFromNode method.
    /// [`Element.convertQuadFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Element/convertQuadFromNode)
    DOMQuad convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    /// The convertRectFromNode method.
    /// [`Element.convertRectFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Element/convertRectFromNode)
    DOMQuad convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from);
    /// The convertRectFromNode method.
    /// [`Element.convertRectFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Element/convertRectFromNode)
    DOMQuad convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    /// The convertPointFromNode method.
    /// [`Element.convertPointFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Element/convertPointFromNode)
    DOMPoint convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from);
    /// The convertPointFromNode method.
    /// [`Element.convertPointFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Element/convertPointFromNode)
    DOMPoint convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    /// Getter of the `children` attribute.
    /// [`Element.children`](https://developer.mozilla.org/en-US/docs/Web/API/Element/children)
    [[nodiscard]] HTMLCollection children() const;
    /// Getter of the `firstElementChild` attribute.
    /// [`Element.firstElementChild`](https://developer.mozilla.org/en-US/docs/Web/API/Element/firstElementChild)
    [[nodiscard]] Element firstElementChild() const;
    /// Getter of the `lastElementChild` attribute.
    /// [`Element.lastElementChild`](https://developer.mozilla.org/en-US/docs/Web/API/Element/lastElementChild)
    [[nodiscard]] Element lastElementChild() const;
    /// Getter of the `childElementCount` attribute.
    /// [`Element.childElementCount`](https://developer.mozilla.org/en-US/docs/Web/API/Element/childElementCount)
    [[nodiscard]] unsigned long childElementCount() const;
    /// The prepend method.
    /// [`Element.prepend`](https://developer.mozilla.org/en-US/docs/Web/API/Element/prepend)
    jsbind::Undefined prepend(const jsbind::Any& nodes);
    /// The append method.
    /// [`Element.append`](https://developer.mozilla.org/en-US/docs/Web/API/Element/append)
    jsbind::Undefined append(const jsbind::Any& nodes);
    /// The replaceChildren method.
    /// [`Element.replaceChildren`](https://developer.mozilla.org/en-US/docs/Web/API/Element/replaceChildren)
    jsbind::Undefined replaceChildren(const jsbind::Any& nodes);
    /// The moveBefore method.
    /// [`Element.moveBefore`](https://developer.mozilla.org/en-US/docs/Web/API/Element/moveBefore)
    jsbind::Undefined moveBefore(const Node& node, const Node& child);
    /// The querySelector method.
    /// [`Element.querySelector`](https://developer.mozilla.org/en-US/docs/Web/API/Element/querySelector)
    Element querySelector(const jsbind::String& selectors);
    /// The querySelectorAll method.
    /// [`Element.querySelectorAll`](https://developer.mozilla.org/en-US/docs/Web/API/Element/querySelectorAll)
    NodeList querySelectorAll(const jsbind::String& selectors);
    /// Getter of the `previousElementSibling` attribute.
    /// [`Element.previousElementSibling`](https://developer.mozilla.org/en-US/docs/Web/API/Element/previousElementSibling)
    [[nodiscard]] Element previousElementSibling() const;
    /// Getter of the `nextElementSibling` attribute.
    /// [`Element.nextElementSibling`](https://developer.mozilla.org/en-US/docs/Web/API/Element/nextElementSibling)
    [[nodiscard]] Element nextElementSibling() const;
    /// The before method.
    /// [`Element.before`](https://developer.mozilla.org/en-US/docs/Web/API/Element/before)
    jsbind::Undefined before(const jsbind::Any& nodes);
    /// The after method.
    /// [`Element.after`](https://developer.mozilla.org/en-US/docs/Web/API/Element/after)
    jsbind::Undefined after(const jsbind::Any& nodes);
    /// The replaceWith method.
    /// [`Element.replaceWith`](https://developer.mozilla.org/en-US/docs/Web/API/Element/replaceWith)
    jsbind::Undefined replaceWith(const jsbind::Any& nodes);
    /// The remove method.
    /// [`Element.remove`](https://developer.mozilla.org/en-US/docs/Web/API/Element/remove)
    jsbind::Undefined remove();
    /// Getter of the `assignedSlot` attribute.
    /// [`Element.assignedSlot`](https://developer.mozilla.org/en-US/docs/Web/API/Element/assignedSlot)
    [[nodiscard]] HTMLSlotElement assignedSlot() const;
    /// Getter of the `role` attribute.
    /// [`Element.role`](https://developer.mozilla.org/en-US/docs/Web/API/Element/role)
    [[nodiscard]] jsbind::String role() const;
    /// Setter of the `role` attribute.
    /// [`Element.role`](https://developer.mozilla.org/en-US/docs/Web/API/Element/role)
    void role(const jsbind::String& value);
    /// Getter of the `ariaActiveDescendantElement` attribute.
    /// [`Element.ariaActiveDescendantElement`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaActiveDescendantElement)
    [[nodiscard]] Element ariaActiveDescendantElement() const;
    /// Setter of the `ariaActiveDescendantElement` attribute.
    /// [`Element.ariaActiveDescendantElement`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaActiveDescendantElement)
    void ariaActiveDescendantElement(const Element& value);
    /// Getter of the `ariaAtomic` attribute.
    /// [`Element.ariaAtomic`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaAtomic)
    [[nodiscard]] jsbind::String ariaAtomic() const;
    /// Setter of the `ariaAtomic` attribute.
    /// [`Element.ariaAtomic`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaAtomic)
    void ariaAtomic(const jsbind::String& value);
    /// Getter of the `ariaAutoComplete` attribute.
    /// [`Element.ariaAutoComplete`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaAutoComplete)
    [[nodiscard]] jsbind::String ariaAutoComplete() const;
    /// Setter of the `ariaAutoComplete` attribute.
    /// [`Element.ariaAutoComplete`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaAutoComplete)
    void ariaAutoComplete(const jsbind::String& value);
    /// Getter of the `ariaBrailleLabel` attribute.
    /// [`Element.ariaBrailleLabel`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaBrailleLabel)
    [[nodiscard]] jsbind::String ariaBrailleLabel() const;
    /// Setter of the `ariaBrailleLabel` attribute.
    /// [`Element.ariaBrailleLabel`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaBrailleLabel)
    void ariaBrailleLabel(const jsbind::String& value);
    /// Getter of the `ariaBrailleRoleDescription` attribute.
    /// [`Element.ariaBrailleRoleDescription`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaBrailleRoleDescription)
    [[nodiscard]] jsbind::String ariaBrailleRoleDescription() const;
    /// Setter of the `ariaBrailleRoleDescription` attribute.
    /// [`Element.ariaBrailleRoleDescription`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaBrailleRoleDescription)
    void ariaBrailleRoleDescription(const jsbind::String& value);
    /// Getter of the `ariaBusy` attribute.
    /// [`Element.ariaBusy`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaBusy)
    [[nodiscard]] jsbind::String ariaBusy() const;
    /// Setter of the `ariaBusy` attribute.
    /// [`Element.ariaBusy`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaBusy)
    void ariaBusy(const jsbind::String& value);
    /// Getter of the `ariaChecked` attribute.
    /// [`Element.ariaChecked`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaChecked)
    [[nodiscard]] jsbind::String ariaChecked() const;
    /// Setter of the `ariaChecked` attribute.
    /// [`Element.ariaChecked`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaChecked)
    void ariaChecked(const jsbind::String& value);
    /// Getter of the `ariaColCount` attribute.
    /// [`Element.ariaColCount`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaColCount)
    [[nodiscard]] jsbind::String ariaColCount() const;
    /// Setter of the `ariaColCount` attribute.
    /// [`Element.ariaColCount`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaColCount)
    void ariaColCount(const jsbind::String& value);
    /// Getter of the `ariaColIndex` attribute.
    /// [`Element.ariaColIndex`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaColIndex)
    [[nodiscard]] jsbind::String ariaColIndex() const;
    /// Setter of the `ariaColIndex` attribute.
    /// [`Element.ariaColIndex`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaColIndex)
    void ariaColIndex(const jsbind::String& value);
    /// Getter of the `ariaColIndexText` attribute.
    /// [`Element.ariaColIndexText`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaColIndexText)
    [[nodiscard]] jsbind::String ariaColIndexText() const;
    /// Setter of the `ariaColIndexText` attribute.
    /// [`Element.ariaColIndexText`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaColIndexText)
    void ariaColIndexText(const jsbind::String& value);
    /// Getter of the `ariaColSpan` attribute.
    /// [`Element.ariaColSpan`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaColSpan)
    [[nodiscard]] jsbind::String ariaColSpan() const;
    /// Setter of the `ariaColSpan` attribute.
    /// [`Element.ariaColSpan`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaColSpan)
    void ariaColSpan(const jsbind::String& value);
    /// Getter of the `ariaControlsElements` attribute.
    /// [`Element.ariaControlsElements`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaControlsElements)
    [[nodiscard]] jsbind::TypedArray<Element> ariaControlsElements() const;
    /// Setter of the `ariaControlsElements` attribute.
    /// [`Element.ariaControlsElements`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaControlsElements)
    void ariaControlsElements(const jsbind::TypedArray<Element>& value);
    /// Getter of the `ariaCurrent` attribute.
    /// [`Element.ariaCurrent`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaCurrent)
    [[nodiscard]] jsbind::String ariaCurrent() const;
    /// Setter of the `ariaCurrent` attribute.
    /// [`Element.ariaCurrent`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaCurrent)
    void ariaCurrent(const jsbind::String& value);
    /// Getter of the `ariaDescribedByElements` attribute.
    /// [`Element.ariaDescribedByElements`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaDescribedByElements)
    [[nodiscard]] jsbind::TypedArray<Element> ariaDescribedByElements() const;
    /// Setter of the `ariaDescribedByElements` attribute.
    /// [`Element.ariaDescribedByElements`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaDescribedByElements)
    void ariaDescribedByElements(const jsbind::TypedArray<Element>& value);
    /// Getter of the `ariaDescription` attribute.
    /// [`Element.ariaDescription`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaDescription)
    [[nodiscard]] jsbind::String ariaDescription() const;
    /// Setter of the `ariaDescription` attribute.
    /// [`Element.ariaDescription`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaDescription)
    void ariaDescription(const jsbind::String& value);
    /// Getter of the `ariaDetailsElements` attribute.
    /// [`Element.ariaDetailsElements`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaDetailsElements)
    [[nodiscard]] jsbind::TypedArray<Element> ariaDetailsElements() const;
    /// Setter of the `ariaDetailsElements` attribute.
    /// [`Element.ariaDetailsElements`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaDetailsElements)
    void ariaDetailsElements(const jsbind::TypedArray<Element>& value);
    /// Getter of the `ariaDisabled` attribute.
    /// [`Element.ariaDisabled`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaDisabled)
    [[nodiscard]] jsbind::String ariaDisabled() const;
    /// Setter of the `ariaDisabled` attribute.
    /// [`Element.ariaDisabled`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaDisabled)
    void ariaDisabled(const jsbind::String& value);
    /// Getter of the `ariaErrorMessageElements` attribute.
    /// [`Element.ariaErrorMessageElements`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaErrorMessageElements)
    [[nodiscard]] jsbind::TypedArray<Element> ariaErrorMessageElements() const;
    /// Setter of the `ariaErrorMessageElements` attribute.
    /// [`Element.ariaErrorMessageElements`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaErrorMessageElements)
    void ariaErrorMessageElements(const jsbind::TypedArray<Element>& value);
    /// Getter of the `ariaExpanded` attribute.
    /// [`Element.ariaExpanded`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaExpanded)
    [[nodiscard]] jsbind::String ariaExpanded() const;
    /// Setter of the `ariaExpanded` attribute.
    /// [`Element.ariaExpanded`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaExpanded)
    void ariaExpanded(const jsbind::String& value);
    /// Getter of the `ariaFlowToElements` attribute.
    /// [`Element.ariaFlowToElements`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaFlowToElements)
    [[nodiscard]] jsbind::TypedArray<Element> ariaFlowToElements() const;
    /// Setter of the `ariaFlowToElements` attribute.
    /// [`Element.ariaFlowToElements`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaFlowToElements)
    void ariaFlowToElements(const jsbind::TypedArray<Element>& value);
    /// Getter of the `ariaHasPopup` attribute.
    /// [`Element.ariaHasPopup`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaHasPopup)
    [[nodiscard]] jsbind::String ariaHasPopup() const;
    /// Setter of the `ariaHasPopup` attribute.
    /// [`Element.ariaHasPopup`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaHasPopup)
    void ariaHasPopup(const jsbind::String& value);
    /// Getter of the `ariaHidden` attribute.
    /// [`Element.ariaHidden`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaHidden)
    [[nodiscard]] jsbind::String ariaHidden() const;
    /// Setter of the `ariaHidden` attribute.
    /// [`Element.ariaHidden`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaHidden)
    void ariaHidden(const jsbind::String& value);
    /// Getter of the `ariaInvalid` attribute.
    /// [`Element.ariaInvalid`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaInvalid)
    [[nodiscard]] jsbind::String ariaInvalid() const;
    /// Setter of the `ariaInvalid` attribute.
    /// [`Element.ariaInvalid`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaInvalid)
    void ariaInvalid(const jsbind::String& value);
    /// Getter of the `ariaKeyShortcuts` attribute.
    /// [`Element.ariaKeyShortcuts`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaKeyShortcuts)
    [[nodiscard]] jsbind::String ariaKeyShortcuts() const;
    /// Setter of the `ariaKeyShortcuts` attribute.
    /// [`Element.ariaKeyShortcuts`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaKeyShortcuts)
    void ariaKeyShortcuts(const jsbind::String& value);
    /// Getter of the `ariaLabel` attribute.
    /// [`Element.ariaLabel`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaLabel)
    [[nodiscard]] jsbind::String ariaLabel() const;
    /// Setter of the `ariaLabel` attribute.
    /// [`Element.ariaLabel`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaLabel)
    void ariaLabel(const jsbind::String& value);
    /// Getter of the `ariaLabelledByElements` attribute.
    /// [`Element.ariaLabelledByElements`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaLabelledByElements)
    [[nodiscard]] jsbind::TypedArray<Element> ariaLabelledByElements() const;
    /// Setter of the `ariaLabelledByElements` attribute.
    /// [`Element.ariaLabelledByElements`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaLabelledByElements)
    void ariaLabelledByElements(const jsbind::TypedArray<Element>& value);
    /// Getter of the `ariaLevel` attribute.
    /// [`Element.ariaLevel`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaLevel)
    [[nodiscard]] jsbind::String ariaLevel() const;
    /// Setter of the `ariaLevel` attribute.
    /// [`Element.ariaLevel`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaLevel)
    void ariaLevel(const jsbind::String& value);
    /// Getter of the `ariaLive` attribute.
    /// [`Element.ariaLive`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaLive)
    [[nodiscard]] jsbind::String ariaLive() const;
    /// Setter of the `ariaLive` attribute.
    /// [`Element.ariaLive`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaLive)
    void ariaLive(const jsbind::String& value);
    /// Getter of the `ariaModal` attribute.
    /// [`Element.ariaModal`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaModal)
    [[nodiscard]] jsbind::String ariaModal() const;
    /// Setter of the `ariaModal` attribute.
    /// [`Element.ariaModal`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaModal)
    void ariaModal(const jsbind::String& value);
    /// Getter of the `ariaMultiLine` attribute.
    /// [`Element.ariaMultiLine`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaMultiLine)
    [[nodiscard]] jsbind::String ariaMultiLine() const;
    /// Setter of the `ariaMultiLine` attribute.
    /// [`Element.ariaMultiLine`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaMultiLine)
    void ariaMultiLine(const jsbind::String& value);
    /// Getter of the `ariaMultiSelectable` attribute.
    /// [`Element.ariaMultiSelectable`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaMultiSelectable)
    [[nodiscard]] jsbind::String ariaMultiSelectable() const;
    /// Setter of the `ariaMultiSelectable` attribute.
    /// [`Element.ariaMultiSelectable`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaMultiSelectable)
    void ariaMultiSelectable(const jsbind::String& value);
    /// Getter of the `ariaOrientation` attribute.
    /// [`Element.ariaOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaOrientation)
    [[nodiscard]] jsbind::String ariaOrientation() const;
    /// Setter of the `ariaOrientation` attribute.
    /// [`Element.ariaOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaOrientation)
    void ariaOrientation(const jsbind::String& value);
    /// Getter of the `ariaOwnsElements` attribute.
    /// [`Element.ariaOwnsElements`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaOwnsElements)
    [[nodiscard]] jsbind::TypedArray<Element> ariaOwnsElements() const;
    /// Setter of the `ariaOwnsElements` attribute.
    /// [`Element.ariaOwnsElements`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaOwnsElements)
    void ariaOwnsElements(const jsbind::TypedArray<Element>& value);
    /// Getter of the `ariaPlaceholder` attribute.
    /// [`Element.ariaPlaceholder`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaPlaceholder)
    [[nodiscard]] jsbind::String ariaPlaceholder() const;
    /// Setter of the `ariaPlaceholder` attribute.
    /// [`Element.ariaPlaceholder`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaPlaceholder)
    void ariaPlaceholder(const jsbind::String& value);
    /// Getter of the `ariaPosInSet` attribute.
    /// [`Element.ariaPosInSet`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaPosInSet)
    [[nodiscard]] jsbind::String ariaPosInSet() const;
    /// Setter of the `ariaPosInSet` attribute.
    /// [`Element.ariaPosInSet`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaPosInSet)
    void ariaPosInSet(const jsbind::String& value);
    /// Getter of the `ariaPressed` attribute.
    /// [`Element.ariaPressed`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaPressed)
    [[nodiscard]] jsbind::String ariaPressed() const;
    /// Setter of the `ariaPressed` attribute.
    /// [`Element.ariaPressed`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaPressed)
    void ariaPressed(const jsbind::String& value);
    /// Getter of the `ariaReadOnly` attribute.
    /// [`Element.ariaReadOnly`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaReadOnly)
    [[nodiscard]] jsbind::String ariaReadOnly() const;
    /// Setter of the `ariaReadOnly` attribute.
    /// [`Element.ariaReadOnly`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaReadOnly)
    void ariaReadOnly(const jsbind::String& value);
    /// Getter of the `ariaRelevant` attribute.
    /// [`Element.ariaRelevant`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaRelevant)
    [[nodiscard]] jsbind::String ariaRelevant() const;
    /// Setter of the `ariaRelevant` attribute.
    /// [`Element.ariaRelevant`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaRelevant)
    void ariaRelevant(const jsbind::String& value);
    /// Getter of the `ariaRequired` attribute.
    /// [`Element.ariaRequired`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaRequired)
    [[nodiscard]] jsbind::String ariaRequired() const;
    /// Setter of the `ariaRequired` attribute.
    /// [`Element.ariaRequired`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaRequired)
    void ariaRequired(const jsbind::String& value);
    /// Getter of the `ariaRoleDescription` attribute.
    /// [`Element.ariaRoleDescription`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaRoleDescription)
    [[nodiscard]] jsbind::String ariaRoleDescription() const;
    /// Setter of the `ariaRoleDescription` attribute.
    /// [`Element.ariaRoleDescription`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaRoleDescription)
    void ariaRoleDescription(const jsbind::String& value);
    /// Getter of the `ariaRowCount` attribute.
    /// [`Element.ariaRowCount`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaRowCount)
    [[nodiscard]] jsbind::String ariaRowCount() const;
    /// Setter of the `ariaRowCount` attribute.
    /// [`Element.ariaRowCount`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaRowCount)
    void ariaRowCount(const jsbind::String& value);
    /// Getter of the `ariaRowIndex` attribute.
    /// [`Element.ariaRowIndex`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaRowIndex)
    [[nodiscard]] jsbind::String ariaRowIndex() const;
    /// Setter of the `ariaRowIndex` attribute.
    /// [`Element.ariaRowIndex`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaRowIndex)
    void ariaRowIndex(const jsbind::String& value);
    /// Getter of the `ariaRowIndexText` attribute.
    /// [`Element.ariaRowIndexText`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaRowIndexText)
    [[nodiscard]] jsbind::String ariaRowIndexText() const;
    /// Setter of the `ariaRowIndexText` attribute.
    /// [`Element.ariaRowIndexText`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaRowIndexText)
    void ariaRowIndexText(const jsbind::String& value);
    /// Getter of the `ariaRowSpan` attribute.
    /// [`Element.ariaRowSpan`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaRowSpan)
    [[nodiscard]] jsbind::String ariaRowSpan() const;
    /// Setter of the `ariaRowSpan` attribute.
    /// [`Element.ariaRowSpan`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaRowSpan)
    void ariaRowSpan(const jsbind::String& value);
    /// Getter of the `ariaSelected` attribute.
    /// [`Element.ariaSelected`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaSelected)
    [[nodiscard]] jsbind::String ariaSelected() const;
    /// Setter of the `ariaSelected` attribute.
    /// [`Element.ariaSelected`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaSelected)
    void ariaSelected(const jsbind::String& value);
    /// Getter of the `ariaSetSize` attribute.
    /// [`Element.ariaSetSize`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaSetSize)
    [[nodiscard]] jsbind::String ariaSetSize() const;
    /// Setter of the `ariaSetSize` attribute.
    /// [`Element.ariaSetSize`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaSetSize)
    void ariaSetSize(const jsbind::String& value);
    /// Getter of the `ariaSort` attribute.
    /// [`Element.ariaSort`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaSort)
    [[nodiscard]] jsbind::String ariaSort() const;
    /// Setter of the `ariaSort` attribute.
    /// [`Element.ariaSort`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaSort)
    void ariaSort(const jsbind::String& value);
    /// Getter of the `ariaValueMax` attribute.
    /// [`Element.ariaValueMax`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaValueMax)
    [[nodiscard]] jsbind::String ariaValueMax() const;
    /// Setter of the `ariaValueMax` attribute.
    /// [`Element.ariaValueMax`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaValueMax)
    void ariaValueMax(const jsbind::String& value);
    /// Getter of the `ariaValueMin` attribute.
    /// [`Element.ariaValueMin`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaValueMin)
    [[nodiscard]] jsbind::String ariaValueMin() const;
    /// Setter of the `ariaValueMin` attribute.
    /// [`Element.ariaValueMin`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaValueMin)
    void ariaValueMin(const jsbind::String& value);
    /// Getter of the `ariaValueNow` attribute.
    /// [`Element.ariaValueNow`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaValueNow)
    [[nodiscard]] jsbind::String ariaValueNow() const;
    /// Setter of the `ariaValueNow` attribute.
    /// [`Element.ariaValueNow`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaValueNow)
    void ariaValueNow(const jsbind::String& value);
    /// Getter of the `ariaValueText` attribute.
    /// [`Element.ariaValueText`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaValueText)
    [[nodiscard]] jsbind::String ariaValueText() const;
    /// Setter of the `ariaValueText` attribute.
    /// [`Element.ariaValueText`](https://developer.mozilla.org/en-US/docs/Web/API/Element/ariaValueText)
    void ariaValueText(const jsbind::String& value);
    /// The animate method.
    /// [`Element.animate`](https://developer.mozilla.org/en-US/docs/Web/API/Element/animate)
    Animation animate(const jsbind::Object& keyframes);
    /// The animate method.
    /// [`Element.animate`](https://developer.mozilla.org/en-US/docs/Web/API/Element/animate)
    Animation animate(const jsbind::Object& keyframes, const jsbind::Any& options);
    /// The getAnimations method.
    /// [`Element.getAnimations`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getAnimations)
    jsbind::TypedArray<Animation> getAnimations();
    /// The getAnimations method.
    /// [`Element.getAnimations`](https://developer.mozilla.org/en-US/docs/Web/API/Element/getAnimations)
    jsbind::TypedArray<Animation> getAnimations(const GetAnimationsOptions& options);
};

