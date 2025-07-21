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
    ShadowRootInit clone() const noexcept;
    ShadowRootMode mode() const;
    void mode(const ShadowRootMode& value);
    bool delegatesFocus() const;
    void delegatesFocus(bool value);
    SlotAssignmentMode slotAssignment() const;
    void slotAssignment(const SlotAssignmentMode& value);
    bool clonable() const;
    void clonable(bool value);
    bool serializable() const;
    void serializable(bool value);
    CustomElementRegistry customElementRegistry() const;
    void customElementRegistry(const CustomElementRegistry& value);
};

class FocusableAreasOption : public emlite::Val {
  explicit FocusableAreasOption(Handle h) noexcept;
public:
    static FocusableAreasOption take_ownership(Handle h) noexcept;
    explicit FocusableAreasOption(const emlite::Val &val) noexcept;
    FocusableAreasOption() noexcept;
    FocusableAreasOption clone() const noexcept;
    FocusableAreaSearchMode mode() const;
    void mode(const FocusableAreaSearchMode& value);
};

class SpatialNavigationSearchOptions : public emlite::Val {
  explicit SpatialNavigationSearchOptions(Handle h) noexcept;
public:
    static SpatialNavigationSearchOptions take_ownership(Handle h) noexcept;
    explicit SpatialNavigationSearchOptions(const emlite::Val &val) noexcept;
    SpatialNavigationSearchOptions() noexcept;
    SpatialNavigationSearchOptions clone() const noexcept;
    jsbind::Sequence<Node> candidates() const;
    void candidates(const jsbind::Sequence<Node>& value);
    Node container() const;
    void container(const Node& value);
};

class CheckVisibilityOptions : public emlite::Val {
  explicit CheckVisibilityOptions(Handle h) noexcept;
public:
    static CheckVisibilityOptions take_ownership(Handle h) noexcept;
    explicit CheckVisibilityOptions(const emlite::Val &val) noexcept;
    CheckVisibilityOptions() noexcept;
    CheckVisibilityOptions clone() const noexcept;
    bool checkOpacity() const;
    void checkOpacity(bool value);
    bool checkVisibilityCSS() const;
    void checkVisibilityCSS(bool value);
    bool contentVisibilityAuto() const;
    void contentVisibilityAuto(bool value);
    bool opacityProperty() const;
    void opacityProperty(bool value);
    bool visibilityProperty() const;
    void visibilityProperty(bool value);
};

class FullscreenOptions : public emlite::Val {
  explicit FullscreenOptions(Handle h) noexcept;
public:
    static FullscreenOptions take_ownership(Handle h) noexcept;
    explicit FullscreenOptions(const emlite::Val &val) noexcept;
    FullscreenOptions() noexcept;
    FullscreenOptions clone() const noexcept;
    ScreenDetailed screen() const;
    void screen(const ScreenDetailed& value);
};

class GetHTMLOptions : public emlite::Val {
  explicit GetHTMLOptions(Handle h) noexcept;
public:
    static GetHTMLOptions take_ownership(Handle h) noexcept;
    explicit GetHTMLOptions(const emlite::Val &val) noexcept;
    GetHTMLOptions() noexcept;
    GetHTMLOptions clone() const noexcept;
    bool serializableShadowRoots() const;
    void serializableShadowRoots(bool value);
    jsbind::Sequence<ShadowRoot> shadowRoots() const;
    void shadowRoots(const jsbind::Sequence<ShadowRoot>& value);
};

class PointerLockOptions : public emlite::Val {
  explicit PointerLockOptions(Handle h) noexcept;
public:
    static PointerLockOptions take_ownership(Handle h) noexcept;
    explicit PointerLockOptions(const emlite::Val &val) noexcept;
    PointerLockOptions() noexcept;
    PointerLockOptions clone() const noexcept;
    bool unadjustedMovement() const;
    void unadjustedMovement(bool value);
};

class GetAnimationsOptions : public emlite::Val {
  explicit GetAnimationsOptions(Handle h) noexcept;
public:
    static GetAnimationsOptions take_ownership(Handle h) noexcept;
    explicit GetAnimationsOptions(const emlite::Val &val) noexcept;
    GetAnimationsOptions() noexcept;
    GetAnimationsOptions clone() const noexcept;
    bool subtree() const;
    void subtree(bool value);
    jsbind::CSSOMString pseudoElement() const;
    void pseudoElement(const jsbind::CSSOMString& value);
};

class Element : public Node {
    explicit Element(Handle h) noexcept;

public:
    explicit Element(const emlite::Val &val) noexcept;
    static Element take_ownership(Handle h) noexcept;

    Element clone() const noexcept;
    jsbind::DOMString namespaceURI() const;
    jsbind::DOMString prefix() const;
    jsbind::DOMString localName() const;
    jsbind::DOMString tagName() const;
    jsbind::DOMString id() const;
    void id(const jsbind::DOMString& value);
    jsbind::DOMString className() const;
    void className(const jsbind::DOMString& value);
    DOMTokenList classList() const;
    jsbind::DOMString slot() const;
    void slot(const jsbind::DOMString& value);
    bool hasAttributes();
    NamedNodeMap attributes() const;
    jsbind::Sequence<jsbind::DOMString> getAttributeNames();
    jsbind::DOMString getAttribute(const jsbind::DOMString& qualifiedName);
    jsbind::DOMString getAttributeNS(const jsbind::DOMString& namespace_, const jsbind::DOMString& localName);
    jsbind::Undefined setAttribute(const jsbind::DOMString& qualifiedName, const jsbind::DOMString& value);
    jsbind::Undefined setAttributeNS(const jsbind::DOMString& namespace_, const jsbind::DOMString& qualifiedName, const jsbind::DOMString& value);
    jsbind::Undefined removeAttribute(const jsbind::DOMString& qualifiedName);
    jsbind::Undefined removeAttributeNS(const jsbind::DOMString& namespace_, const jsbind::DOMString& localName);
    bool toggleAttribute(const jsbind::DOMString& qualifiedName);
    bool toggleAttribute(const jsbind::DOMString& qualifiedName, bool force);
    bool hasAttribute(const jsbind::DOMString& qualifiedName);
    bool hasAttributeNS(const jsbind::DOMString& namespace_, const jsbind::DOMString& localName);
    Attr getAttributeNode(const jsbind::DOMString& qualifiedName);
    Attr getAttributeNodeNS(const jsbind::DOMString& namespace_, const jsbind::DOMString& localName);
    Attr setAttributeNode(const Attr& attr);
    Attr setAttributeNodeNS(const Attr& attr);
    Attr removeAttributeNode(const Attr& attr);
    ShadowRoot attachShadow(const ShadowRootInit& init);
    ShadowRoot shadowRoot() const;
    CustomElementRegistry customElementRegistry() const;
    Element closest(const jsbind::DOMString& selectors);
    bool matches(const jsbind::DOMString& selectors);
    bool webkitMatchesSelector(const jsbind::DOMString& selectors);
    HTMLCollection getElementsByTagName(const jsbind::DOMString& qualifiedName);
    HTMLCollection getElementsByTagNameNS(const jsbind::DOMString& namespace_, const jsbind::DOMString& localName);
    HTMLCollection getElementsByClassName(const jsbind::DOMString& classNames);
    Element insertAdjacentElement(const jsbind::DOMString& where, const Element& element);
    jsbind::Undefined insertAdjacentText(const jsbind::DOMString& where, const jsbind::DOMString& data);
    Node getSpatialNavigationContainer();
    jsbind::Sequence<Node> focusableAreas();
    jsbind::Sequence<Node> focusableAreas(const FocusableAreasOption& option);
    Node spatialNavigationSearch(const SpatialNavigationDirection& dir);
    Node spatialNavigationSearch(const SpatialNavigationDirection& dir, const SpatialNavigationSearchOptions& options);
    CSSPseudoElement pseudo(const jsbind::CSSOMString& type);
    DOMTokenList part() const;
    StylePropertyMapReadOnly computedStyleMap();
    DOMRectList getClientRects();
    DOMRect getBoundingClientRect();
    bool checkVisibility();
    bool checkVisibility(const CheckVisibilityOptions& options);
    jsbind::Undefined scrollIntoView();
    jsbind::Undefined scrollIntoView(const jsbind::Any& arg);
    jsbind::Undefined scroll(double x, double y);
    jsbind::Undefined scrollTo(double x, double y);
    jsbind::Undefined scrollBy(double x, double y);
    double scrollTop() const;
    void scrollTop(double value);
    double scrollLeft() const;
    void scrollLeft(double value);
    long scrollWidth() const;
    long scrollHeight() const;
    long clientTop() const;
    long clientLeft() const;
    long clientWidth() const;
    long clientHeight() const;
    double currentCSSZoom() const;
    jsbind::DOMString elementTiming() const;
    void elementTiming(const jsbind::DOMString& value);
    jsbind::Promise<jsbind::Undefined> requestFullscreen();
    jsbind::Promise<jsbind::Undefined> requestFullscreen(const FullscreenOptions& options);
    jsbind::Any onfullscreenchange() const;
    void onfullscreenchange(const jsbind::Any& value);
    jsbind::Any onfullscreenerror() const;
    void onfullscreenerror(const jsbind::Any& value);
    jsbind::Undefined setHTMLUnsafe(const jsbind::Any& html);
    jsbind::DOMString getHTML();
    jsbind::DOMString getHTML(const GetHTMLOptions& options);
    jsbind::Any innerHTML() const;
    void innerHTML(const jsbind::Any& value);
    jsbind::Any outerHTML() const;
    void outerHTML(const jsbind::Any& value);
    jsbind::Undefined insertAdjacentHTML(const jsbind::DOMString& position, const jsbind::Any& string);
    jsbind::Undefined setPointerCapture(long pointerId);
    jsbind::Undefined releasePointerCapture(long pointerId);
    bool hasPointerCapture(long pointerId);
    jsbind::Promise<jsbind::Undefined> requestPointerLock();
    jsbind::Promise<jsbind::Undefined> requestPointerLock(const PointerLockOptions& options);
    jsbind::CSSOMString regionOverset() const;
    jsbind::Sequence<Range> getRegionFlowRanges();
    jsbind::Sequence<DOMQuad> getBoxQuads();
    jsbind::Sequence<DOMQuad> getBoxQuads(const BoxQuadOptions& options);
    DOMQuad convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from);
    DOMQuad convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    DOMQuad convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from);
    DOMQuad convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    DOMPoint convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from);
    DOMPoint convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    HTMLCollection children() const;
    Element firstElementChild() const;
    Element lastElementChild() const;
    unsigned long childElementCount() const;
    jsbind::Undefined prepend(const jsbind::Any& nodes);
    jsbind::Undefined append(const jsbind::Any& nodes);
    jsbind::Undefined replaceChildren(const jsbind::Any& nodes);
    jsbind::Undefined moveBefore(const Node& node, const Node& child);
    Element querySelector(const jsbind::DOMString& selectors);
    NodeList querySelectorAll(const jsbind::DOMString& selectors);
    Element previousElementSibling() const;
    Element nextElementSibling() const;
    jsbind::Undefined before(const jsbind::Any& nodes);
    jsbind::Undefined after(const jsbind::Any& nodes);
    jsbind::Undefined replaceWith(const jsbind::Any& nodes);
    jsbind::Undefined remove();
    HTMLSlotElement assignedSlot() const;
    jsbind::DOMString role() const;
    void role(const jsbind::DOMString& value);
    Element ariaActiveDescendantElement() const;
    void ariaActiveDescendantElement(const Element& value);
    jsbind::DOMString ariaAtomic() const;
    void ariaAtomic(const jsbind::DOMString& value);
    jsbind::DOMString ariaAutoComplete() const;
    void ariaAutoComplete(const jsbind::DOMString& value);
    jsbind::DOMString ariaBrailleLabel() const;
    void ariaBrailleLabel(const jsbind::DOMString& value);
    jsbind::DOMString ariaBrailleRoleDescription() const;
    void ariaBrailleRoleDescription(const jsbind::DOMString& value);
    jsbind::DOMString ariaBusy() const;
    void ariaBusy(const jsbind::DOMString& value);
    jsbind::DOMString ariaChecked() const;
    void ariaChecked(const jsbind::DOMString& value);
    jsbind::DOMString ariaColCount() const;
    void ariaColCount(const jsbind::DOMString& value);
    jsbind::DOMString ariaColIndex() const;
    void ariaColIndex(const jsbind::DOMString& value);
    jsbind::DOMString ariaColIndexText() const;
    void ariaColIndexText(const jsbind::DOMString& value);
    jsbind::DOMString ariaColSpan() const;
    void ariaColSpan(const jsbind::DOMString& value);
    jsbind::FrozenArray<Element> ariaControlsElements() const;
    void ariaControlsElements(const jsbind::FrozenArray<Element>& value);
    jsbind::DOMString ariaCurrent() const;
    void ariaCurrent(const jsbind::DOMString& value);
    jsbind::FrozenArray<Element> ariaDescribedByElements() const;
    void ariaDescribedByElements(const jsbind::FrozenArray<Element>& value);
    jsbind::DOMString ariaDescription() const;
    void ariaDescription(const jsbind::DOMString& value);
    jsbind::FrozenArray<Element> ariaDetailsElements() const;
    void ariaDetailsElements(const jsbind::FrozenArray<Element>& value);
    jsbind::DOMString ariaDisabled() const;
    void ariaDisabled(const jsbind::DOMString& value);
    jsbind::FrozenArray<Element> ariaErrorMessageElements() const;
    void ariaErrorMessageElements(const jsbind::FrozenArray<Element>& value);
    jsbind::DOMString ariaExpanded() const;
    void ariaExpanded(const jsbind::DOMString& value);
    jsbind::FrozenArray<Element> ariaFlowToElements() const;
    void ariaFlowToElements(const jsbind::FrozenArray<Element>& value);
    jsbind::DOMString ariaHasPopup() const;
    void ariaHasPopup(const jsbind::DOMString& value);
    jsbind::DOMString ariaHidden() const;
    void ariaHidden(const jsbind::DOMString& value);
    jsbind::DOMString ariaInvalid() const;
    void ariaInvalid(const jsbind::DOMString& value);
    jsbind::DOMString ariaKeyShortcuts() const;
    void ariaKeyShortcuts(const jsbind::DOMString& value);
    jsbind::DOMString ariaLabel() const;
    void ariaLabel(const jsbind::DOMString& value);
    jsbind::FrozenArray<Element> ariaLabelledByElements() const;
    void ariaLabelledByElements(const jsbind::FrozenArray<Element>& value);
    jsbind::DOMString ariaLevel() const;
    void ariaLevel(const jsbind::DOMString& value);
    jsbind::DOMString ariaLive() const;
    void ariaLive(const jsbind::DOMString& value);
    jsbind::DOMString ariaModal() const;
    void ariaModal(const jsbind::DOMString& value);
    jsbind::DOMString ariaMultiLine() const;
    void ariaMultiLine(const jsbind::DOMString& value);
    jsbind::DOMString ariaMultiSelectable() const;
    void ariaMultiSelectable(const jsbind::DOMString& value);
    jsbind::DOMString ariaOrientation() const;
    void ariaOrientation(const jsbind::DOMString& value);
    jsbind::FrozenArray<Element> ariaOwnsElements() const;
    void ariaOwnsElements(const jsbind::FrozenArray<Element>& value);
    jsbind::DOMString ariaPlaceholder() const;
    void ariaPlaceholder(const jsbind::DOMString& value);
    jsbind::DOMString ariaPosInSet() const;
    void ariaPosInSet(const jsbind::DOMString& value);
    jsbind::DOMString ariaPressed() const;
    void ariaPressed(const jsbind::DOMString& value);
    jsbind::DOMString ariaReadOnly() const;
    void ariaReadOnly(const jsbind::DOMString& value);
    jsbind::DOMString ariaRelevant() const;
    void ariaRelevant(const jsbind::DOMString& value);
    jsbind::DOMString ariaRequired() const;
    void ariaRequired(const jsbind::DOMString& value);
    jsbind::DOMString ariaRoleDescription() const;
    void ariaRoleDescription(const jsbind::DOMString& value);
    jsbind::DOMString ariaRowCount() const;
    void ariaRowCount(const jsbind::DOMString& value);
    jsbind::DOMString ariaRowIndex() const;
    void ariaRowIndex(const jsbind::DOMString& value);
    jsbind::DOMString ariaRowIndexText() const;
    void ariaRowIndexText(const jsbind::DOMString& value);
    jsbind::DOMString ariaRowSpan() const;
    void ariaRowSpan(const jsbind::DOMString& value);
    jsbind::DOMString ariaSelected() const;
    void ariaSelected(const jsbind::DOMString& value);
    jsbind::DOMString ariaSetSize() const;
    void ariaSetSize(const jsbind::DOMString& value);
    jsbind::DOMString ariaSort() const;
    void ariaSort(const jsbind::DOMString& value);
    jsbind::DOMString ariaValueMax() const;
    void ariaValueMax(const jsbind::DOMString& value);
    jsbind::DOMString ariaValueMin() const;
    void ariaValueMin(const jsbind::DOMString& value);
    jsbind::DOMString ariaValueNow() const;
    void ariaValueNow(const jsbind::DOMString& value);
    jsbind::DOMString ariaValueText() const;
    void ariaValueText(const jsbind::DOMString& value);
    Animation animate(const jsbind::Object& keyframes);
    Animation animate(const jsbind::Object& keyframes, const jsbind::Any& options);
    jsbind::Sequence<Animation> getAnimations();
    jsbind::Sequence<Animation> getAnimations(const GetAnimationsOptions& options);
};

