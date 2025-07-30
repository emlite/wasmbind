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
    jsbind::TypedArray<Node> candidates() const;
    void candidates(const jsbind::TypedArray<Node>& value);
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
    jsbind::TypedArray<ShadowRoot> shadowRoots() const;
    void shadowRoots(const jsbind::TypedArray<ShadowRoot>& value);
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
    jsbind::String pseudoElement() const;
    void pseudoElement(const jsbind::String& value);
};

class Element : public Node {
    explicit Element(Handle h) noexcept;

public:
    explicit Element(const emlite::Val &val) noexcept;
    static Element take_ownership(Handle h) noexcept;

    Element clone() const noexcept;
    jsbind::String namespaceURI() const;
    jsbind::String prefix() const;
    jsbind::String localName() const;
    jsbind::String tagName() const;
    jsbind::String id() const;
    void id(const jsbind::String& value);
    jsbind::String className() const;
    void className(const jsbind::String& value);
    DOMTokenList classList() const;
    jsbind::String slot() const;
    void slot(const jsbind::String& value);
    bool hasAttributes();
    NamedNodeMap attributes() const;
    jsbind::TypedArray<jsbind::String> getAttributeNames();
    jsbind::String getAttribute(const jsbind::String& qualifiedName);
    jsbind::String getAttributeNS(const jsbind::String& namespace_, const jsbind::String& localName);
    jsbind::Undefined setAttribute(const jsbind::String& qualifiedName, const jsbind::String& value);
    jsbind::Undefined setAttributeNS(const jsbind::String& namespace_, const jsbind::String& qualifiedName, const jsbind::String& value);
    jsbind::Undefined removeAttribute(const jsbind::String& qualifiedName);
    jsbind::Undefined removeAttributeNS(const jsbind::String& namespace_, const jsbind::String& localName);
    bool toggleAttribute(const jsbind::String& qualifiedName);
    bool toggleAttribute(const jsbind::String& qualifiedName, bool force);
    bool hasAttribute(const jsbind::String& qualifiedName);
    bool hasAttributeNS(const jsbind::String& namespace_, const jsbind::String& localName);
    Attr getAttributeNode(const jsbind::String& qualifiedName);
    Attr getAttributeNodeNS(const jsbind::String& namespace_, const jsbind::String& localName);
    Attr setAttributeNode(const Attr& attr);
    Attr setAttributeNodeNS(const Attr& attr);
    Attr removeAttributeNode(const Attr& attr);
    ShadowRoot attachShadow(const ShadowRootInit& init);
    ShadowRoot shadowRoot() const;
    CustomElementRegistry customElementRegistry() const;
    Element closest(const jsbind::String& selectors);
    bool matches(const jsbind::String& selectors);
    bool webkitMatchesSelector(const jsbind::String& selectors);
    HTMLCollection getElementsByTagName(const jsbind::String& qualifiedName);
    HTMLCollection getElementsByTagNameNS(const jsbind::String& namespace_, const jsbind::String& localName);
    HTMLCollection getElementsByClassName(const jsbind::String& classNames);
    Element insertAdjacentElement(const jsbind::String& where, const Element& element);
    jsbind::Undefined insertAdjacentText(const jsbind::String& where, const jsbind::String& data);
    Node getSpatialNavigationContainer();
    jsbind::TypedArray<Node> focusableAreas();
    jsbind::TypedArray<Node> focusableAreas(const FocusableAreasOption& option);
    Node spatialNavigationSearch(const SpatialNavigationDirection& dir);
    Node spatialNavigationSearch(const SpatialNavigationDirection& dir, const SpatialNavigationSearchOptions& options);
    CSSPseudoElement pseudo(const jsbind::String& type);
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
    jsbind::String elementTiming() const;
    void elementTiming(const jsbind::String& value);
    jsbind::Promise<jsbind::Undefined> requestFullscreen();
    jsbind::Promise<jsbind::Undefined> requestFullscreen(const FullscreenOptions& options);
    jsbind::Any onfullscreenchange() const;
    void onfullscreenchange(const jsbind::Any& value);
    jsbind::Any onfullscreenerror() const;
    void onfullscreenerror(const jsbind::Any& value);
    jsbind::Undefined setHTMLUnsafe(const jsbind::Any& html);
    jsbind::String getHTML();
    jsbind::String getHTML(const GetHTMLOptions& options);
    jsbind::Any innerHTML() const;
    void innerHTML(const jsbind::Any& value);
    jsbind::Any outerHTML() const;
    void outerHTML(const jsbind::Any& value);
    jsbind::Undefined insertAdjacentHTML(const jsbind::String& position, const jsbind::Any& string);
    jsbind::Undefined setPointerCapture(long pointerId);
    jsbind::Undefined releasePointerCapture(long pointerId);
    bool hasPointerCapture(long pointerId);
    jsbind::Promise<jsbind::Undefined> requestPointerLock();
    jsbind::Promise<jsbind::Undefined> requestPointerLock(const PointerLockOptions& options);
    jsbind::String regionOverset() const;
    jsbind::TypedArray<Range> getRegionFlowRanges();
    jsbind::TypedArray<DOMQuad> getBoxQuads();
    jsbind::TypedArray<DOMQuad> getBoxQuads(const BoxQuadOptions& options);
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
    Element querySelector(const jsbind::String& selectors);
    NodeList querySelectorAll(const jsbind::String& selectors);
    Element previousElementSibling() const;
    Element nextElementSibling() const;
    jsbind::Undefined before(const jsbind::Any& nodes);
    jsbind::Undefined after(const jsbind::Any& nodes);
    jsbind::Undefined replaceWith(const jsbind::Any& nodes);
    jsbind::Undefined remove();
    HTMLSlotElement assignedSlot() const;
    jsbind::String role() const;
    void role(const jsbind::String& value);
    Element ariaActiveDescendantElement() const;
    void ariaActiveDescendantElement(const Element& value);
    jsbind::String ariaAtomic() const;
    void ariaAtomic(const jsbind::String& value);
    jsbind::String ariaAutoComplete() const;
    void ariaAutoComplete(const jsbind::String& value);
    jsbind::String ariaBrailleLabel() const;
    void ariaBrailleLabel(const jsbind::String& value);
    jsbind::String ariaBrailleRoleDescription() const;
    void ariaBrailleRoleDescription(const jsbind::String& value);
    jsbind::String ariaBusy() const;
    void ariaBusy(const jsbind::String& value);
    jsbind::String ariaChecked() const;
    void ariaChecked(const jsbind::String& value);
    jsbind::String ariaColCount() const;
    void ariaColCount(const jsbind::String& value);
    jsbind::String ariaColIndex() const;
    void ariaColIndex(const jsbind::String& value);
    jsbind::String ariaColIndexText() const;
    void ariaColIndexText(const jsbind::String& value);
    jsbind::String ariaColSpan() const;
    void ariaColSpan(const jsbind::String& value);
    jsbind::TypedArray<Element> ariaControlsElements() const;
    void ariaControlsElements(const jsbind::TypedArray<Element>& value);
    jsbind::String ariaCurrent() const;
    void ariaCurrent(const jsbind::String& value);
    jsbind::TypedArray<Element> ariaDescribedByElements() const;
    void ariaDescribedByElements(const jsbind::TypedArray<Element>& value);
    jsbind::String ariaDescription() const;
    void ariaDescription(const jsbind::String& value);
    jsbind::TypedArray<Element> ariaDetailsElements() const;
    void ariaDetailsElements(const jsbind::TypedArray<Element>& value);
    jsbind::String ariaDisabled() const;
    void ariaDisabled(const jsbind::String& value);
    jsbind::TypedArray<Element> ariaErrorMessageElements() const;
    void ariaErrorMessageElements(const jsbind::TypedArray<Element>& value);
    jsbind::String ariaExpanded() const;
    void ariaExpanded(const jsbind::String& value);
    jsbind::TypedArray<Element> ariaFlowToElements() const;
    void ariaFlowToElements(const jsbind::TypedArray<Element>& value);
    jsbind::String ariaHasPopup() const;
    void ariaHasPopup(const jsbind::String& value);
    jsbind::String ariaHidden() const;
    void ariaHidden(const jsbind::String& value);
    jsbind::String ariaInvalid() const;
    void ariaInvalid(const jsbind::String& value);
    jsbind::String ariaKeyShortcuts() const;
    void ariaKeyShortcuts(const jsbind::String& value);
    jsbind::String ariaLabel() const;
    void ariaLabel(const jsbind::String& value);
    jsbind::TypedArray<Element> ariaLabelledByElements() const;
    void ariaLabelledByElements(const jsbind::TypedArray<Element>& value);
    jsbind::String ariaLevel() const;
    void ariaLevel(const jsbind::String& value);
    jsbind::String ariaLive() const;
    void ariaLive(const jsbind::String& value);
    jsbind::String ariaModal() const;
    void ariaModal(const jsbind::String& value);
    jsbind::String ariaMultiLine() const;
    void ariaMultiLine(const jsbind::String& value);
    jsbind::String ariaMultiSelectable() const;
    void ariaMultiSelectable(const jsbind::String& value);
    jsbind::String ariaOrientation() const;
    void ariaOrientation(const jsbind::String& value);
    jsbind::TypedArray<Element> ariaOwnsElements() const;
    void ariaOwnsElements(const jsbind::TypedArray<Element>& value);
    jsbind::String ariaPlaceholder() const;
    void ariaPlaceholder(const jsbind::String& value);
    jsbind::String ariaPosInSet() const;
    void ariaPosInSet(const jsbind::String& value);
    jsbind::String ariaPressed() const;
    void ariaPressed(const jsbind::String& value);
    jsbind::String ariaReadOnly() const;
    void ariaReadOnly(const jsbind::String& value);
    jsbind::String ariaRelevant() const;
    void ariaRelevant(const jsbind::String& value);
    jsbind::String ariaRequired() const;
    void ariaRequired(const jsbind::String& value);
    jsbind::String ariaRoleDescription() const;
    void ariaRoleDescription(const jsbind::String& value);
    jsbind::String ariaRowCount() const;
    void ariaRowCount(const jsbind::String& value);
    jsbind::String ariaRowIndex() const;
    void ariaRowIndex(const jsbind::String& value);
    jsbind::String ariaRowIndexText() const;
    void ariaRowIndexText(const jsbind::String& value);
    jsbind::String ariaRowSpan() const;
    void ariaRowSpan(const jsbind::String& value);
    jsbind::String ariaSelected() const;
    void ariaSelected(const jsbind::String& value);
    jsbind::String ariaSetSize() const;
    void ariaSetSize(const jsbind::String& value);
    jsbind::String ariaSort() const;
    void ariaSort(const jsbind::String& value);
    jsbind::String ariaValueMax() const;
    void ariaValueMax(const jsbind::String& value);
    jsbind::String ariaValueMin() const;
    void ariaValueMin(const jsbind::String& value);
    jsbind::String ariaValueNow() const;
    void ariaValueNow(const jsbind::String& value);
    jsbind::String ariaValueText() const;
    void ariaValueText(const jsbind::String& value);
    Animation animate(const jsbind::Object& keyframes);
    Animation animate(const jsbind::Object& keyframes, const jsbind::Any& options);
    jsbind::TypedArray<Animation> getAnimations();
    jsbind::TypedArray<Animation> getAnimations(const GetAnimationsOptions& options);
};

