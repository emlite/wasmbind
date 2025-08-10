#include <webbind/Element.hpp>
#include <webbind/DOMTokenList.hpp>
#include <webbind/NamedNodeMap.hpp>
#include <webbind/Attr.hpp>
#include <webbind/ShadowRoot.hpp>
#include <webbind/ShadowRootInit.hpp>
#include <webbind/CustomElementRegistry.hpp>
#include <webbind/Element.hpp>
#include <webbind/HTMLCollection.hpp>
#include <webbind/FocusableAreasOption.hpp>
#include <webbind/SpatialNavigationSearchOptions.hpp>
#include <webbind/CSSPseudoElement.hpp>
#include <webbind/StylePropertyMapReadOnly.hpp>
#include <webbind/DOMRectList.hpp>
#include <webbind/DOMRect.hpp>
#include <webbind/CheckVisibilityOptions.hpp>
#include <webbind/FullscreenOptions.hpp>
#include <webbind/GetHTMLOptions.hpp>
#include <webbind/PointerLockOptions.hpp>
#include <webbind/Range.hpp>
#include <webbind/DOMQuad.hpp>
#include <webbind/BoxQuadOptions.hpp>
#include <webbind/DOMQuadInit.hpp>
#include <webbind/ConvertCoordinateOptions.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/DOMPoint.hpp>
#include <webbind/DOMPointInit.hpp>
#include <webbind/NodeList.hpp>
#include <webbind/HTMLSlotElement.hpp>
#include <webbind/Animation.hpp>
#include <webbind/GetAnimationsOptions.hpp>

namespace webbind {

Element Element::take_ownership(Handle h) noexcept {
        return Element(h);
    }
Element Element::clone() const noexcept { return *this; }
emlite::Val Element::instance() noexcept { return emlite::Val::global("Element"); }
Element::Element(Handle h) noexcept : Node(emlite::Val::take_ownership(h)) {}
Element::Element(const emlite::Val &val) noexcept: Node(val) {}

jsbind::String Element::namespaceURI() const {
    return Node::get("namespaceURI").as<jsbind::String>();
}

jsbind::String Element::prefix() const {
    return Node::get("prefix").as<jsbind::String>();
}

jsbind::String Element::localName() const {
    return Node::get("localName").as<jsbind::String>();
}

jsbind::String Element::tagName() const {
    return Node::get("tagName").as<jsbind::String>();
}

jsbind::String Element::id() const {
    return Node::get("id").as<jsbind::String>();
}

void Element::id(const jsbind::String& value) {
    Node::set("id", value);
}

jsbind::String Element::className() const {
    return Node::get("className").as<jsbind::String>();
}

void Element::className(const jsbind::String& value) {
    Node::set("className", value);
}

DOMTokenList Element::classList() const {
    return Node::get("classList").as<DOMTokenList>();
}

jsbind::String Element::slot() const {
    return Node::get("slot").as<jsbind::String>();
}

void Element::slot(const jsbind::String& value) {
    Node::set("slot", value);
}

bool Element::hasAttributes() {
    return Node::call("hasAttributes").as<bool>();
}

NamedNodeMap Element::attributes() const {
    return Node::get("attributes").as<NamedNodeMap>();
}

jsbind::TypedArray<jsbind::String> Element::getAttributeNames() {
    return Node::call("getAttributeNames").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::String Element::getAttribute(const jsbind::String& qualifiedName) {
    return Node::call("getAttribute", qualifiedName).as<jsbind::String>();
}

jsbind::String Element::getAttributeNS(const jsbind::String& namespace_, const jsbind::String& localName) {
    return Node::call("getAttributeNS", namespace_, localName).as<jsbind::String>();
}

jsbind::Undefined Element::setAttribute(const jsbind::String& qualifiedName, const jsbind::String& value) {
    return Node::call("setAttribute", qualifiedName, value).as<jsbind::Undefined>();
}

jsbind::Undefined Element::setAttributeNS(const jsbind::String& namespace_, const jsbind::String& qualifiedName, const jsbind::String& value) {
    return Node::call("setAttributeNS", namespace_, qualifiedName, value).as<jsbind::Undefined>();
}

jsbind::Undefined Element::removeAttribute(const jsbind::String& qualifiedName) {
    return Node::call("removeAttribute", qualifiedName).as<jsbind::Undefined>();
}

jsbind::Undefined Element::removeAttributeNS(const jsbind::String& namespace_, const jsbind::String& localName) {
    return Node::call("removeAttributeNS", namespace_, localName).as<jsbind::Undefined>();
}

bool Element::toggleAttribute(const jsbind::String& qualifiedName) {
    return Node::call("toggleAttribute", qualifiedName).as<bool>();
}

bool Element::toggleAttribute(const jsbind::String& qualifiedName, bool force) {
    return Node::call("toggleAttribute", qualifiedName, force).as<bool>();
}

bool Element::hasAttribute(const jsbind::String& qualifiedName) {
    return Node::call("hasAttribute", qualifiedName).as<bool>();
}

bool Element::hasAttributeNS(const jsbind::String& namespace_, const jsbind::String& localName) {
    return Node::call("hasAttributeNS", namespace_, localName).as<bool>();
}

Attr Element::getAttributeNode(const jsbind::String& qualifiedName) {
    return Node::call("getAttributeNode", qualifiedName).as<Attr>();
}

Attr Element::getAttributeNodeNS(const jsbind::String& namespace_, const jsbind::String& localName) {
    return Node::call("getAttributeNodeNS", namespace_, localName).as<Attr>();
}

Attr Element::setAttributeNode(const Attr& attr) {
    return Node::call("setAttributeNode", attr).as<Attr>();
}

Attr Element::setAttributeNodeNS(const Attr& attr) {
    return Node::call("setAttributeNodeNS", attr).as<Attr>();
}

Attr Element::removeAttributeNode(const Attr& attr) {
    return Node::call("removeAttributeNode", attr).as<Attr>();
}

ShadowRoot Element::attachShadow(const ShadowRootInit& init) {
    return Node::call("attachShadow", init).as<ShadowRoot>();
}

ShadowRoot Element::shadowRoot() const {
    return Node::get("shadowRoot").as<ShadowRoot>();
}

CustomElementRegistry Element::customElementRegistry() const {
    return Node::get("customElementRegistry").as<CustomElementRegistry>();
}

Element Element::closest(const jsbind::String& selectors) {
    return Node::call("closest", selectors).as<Element>();
}

bool Element::matches(const jsbind::String& selectors) {
    return Node::call("matches", selectors).as<bool>();
}

bool Element::webkitMatchesSelector(const jsbind::String& selectors) {
    return Node::call("webkitMatchesSelector", selectors).as<bool>();
}

HTMLCollection Element::getElementsByTagName(const jsbind::String& qualifiedName) {
    return Node::call("getElementsByTagName", qualifiedName).as<HTMLCollection>();
}

HTMLCollection Element::getElementsByTagNameNS(const jsbind::String& namespace_, const jsbind::String& localName) {
    return Node::call("getElementsByTagNameNS", namespace_, localName).as<HTMLCollection>();
}

HTMLCollection Element::getElementsByClassName(const jsbind::String& classNames) {
    return Node::call("getElementsByClassName", classNames).as<HTMLCollection>();
}

Element Element::insertAdjacentElement(const jsbind::String& where, const Element& element) {
    return Node::call("insertAdjacentElement", where, element).as<Element>();
}

jsbind::Undefined Element::insertAdjacentText(const jsbind::String& where, const jsbind::String& data) {
    return Node::call("insertAdjacentText", where, data).as<jsbind::Undefined>();
}

Node Element::getSpatialNavigationContainer() {
    return Node::call("getSpatialNavigationContainer").as<Node>();
}

jsbind::TypedArray<Node> Element::focusableAreas() {
    return Node::call("focusableAreas").as<jsbind::TypedArray<Node>>();
}

jsbind::TypedArray<Node> Element::focusableAreas(const FocusableAreasOption& option) {
    return Node::call("focusableAreas", option).as<jsbind::TypedArray<Node>>();
}

Node Element::spatialNavigationSearch(const SpatialNavigationDirection& dir) {
    return Node::call("spatialNavigationSearch", dir).as<Node>();
}

Node Element::spatialNavigationSearch(const SpatialNavigationDirection& dir, const SpatialNavigationSearchOptions& options) {
    return Node::call("spatialNavigationSearch", dir, options).as<Node>();
}

CSSPseudoElement Element::pseudo(const jsbind::String& type) {
    return Node::call("pseudo", type).as<CSSPseudoElement>();
}

DOMTokenList Element::part() const {
    return Node::get("part").as<DOMTokenList>();
}

StylePropertyMapReadOnly Element::computedStyleMap() {
    return Node::call("computedStyleMap").as<StylePropertyMapReadOnly>();
}

DOMRectList Element::getClientRects() {
    return Node::call("getClientRects").as<DOMRectList>();
}

DOMRect Element::getBoundingClientRect() {
    return Node::call("getBoundingClientRect").as<DOMRect>();
}

bool Element::checkVisibility() {
    return Node::call("checkVisibility").as<bool>();
}

bool Element::checkVisibility(const CheckVisibilityOptions& options) {
    return Node::call("checkVisibility", options).as<bool>();
}

jsbind::Undefined Element::scrollIntoView() {
    return Node::call("scrollIntoView").as<jsbind::Undefined>();
}

jsbind::Undefined Element::scrollIntoView(const jsbind::Any& arg) {
    return Node::call("scrollIntoView", arg).as<jsbind::Undefined>();
}

jsbind::Undefined Element::scroll(double x, double y) {
    return Node::call("scroll", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined Element::scrollTo(double x, double y) {
    return Node::call("scrollTo", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined Element::scrollBy(double x, double y) {
    return Node::call("scrollBy", x, y).as<jsbind::Undefined>();
}

double Element::scrollTop() const {
    return Node::get("scrollTop").as<double>();
}

void Element::scrollTop(double value) {
    Node::set("scrollTop", value);
}

double Element::scrollLeft() const {
    return Node::get("scrollLeft").as<double>();
}

void Element::scrollLeft(double value) {
    Node::set("scrollLeft", value);
}

long Element::scrollWidth() const {
    return Node::get("scrollWidth").as<long>();
}

long Element::scrollHeight() const {
    return Node::get("scrollHeight").as<long>();
}

long Element::clientTop() const {
    return Node::get("clientTop").as<long>();
}

long Element::clientLeft() const {
    return Node::get("clientLeft").as<long>();
}

long Element::clientWidth() const {
    return Node::get("clientWidth").as<long>();
}

long Element::clientHeight() const {
    return Node::get("clientHeight").as<long>();
}

double Element::currentCSSZoom() const {
    return Node::get("currentCSSZoom").as<double>();
}

jsbind::String Element::elementTiming() const {
    return Node::get("elementTiming").as<jsbind::String>();
}

void Element::elementTiming(const jsbind::String& value) {
    Node::set("elementTiming", value);
}

jsbind::Promise<jsbind::Undefined> Element::requestFullscreen() {
    return Node::call("requestFullscreen").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Element::requestFullscreen(const FullscreenOptions& options) {
    return Node::call("requestFullscreen", options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Any Element::onfullscreenchange() const {
    return Node::get("onfullscreenchange").as<jsbind::Any>();
}

void Element::onfullscreenchange(const jsbind::Any& value) {
    Node::set("onfullscreenchange", value);
}

jsbind::Any Element::onfullscreenerror() const {
    return Node::get("onfullscreenerror").as<jsbind::Any>();
}

void Element::onfullscreenerror(const jsbind::Any& value) {
    Node::set("onfullscreenerror", value);
}

jsbind::Undefined Element::setHTMLUnsafe(const jsbind::Any& html) {
    return Node::call("setHTMLUnsafe", html).as<jsbind::Undefined>();
}

jsbind::String Element::getHTML() {
    return Node::call("getHTML").as<jsbind::String>();
}

jsbind::String Element::getHTML(const GetHTMLOptions& options) {
    return Node::call("getHTML", options).as<jsbind::String>();
}

jsbind::Any Element::innerHTML() const {
    return Node::get("innerHTML").as<jsbind::Any>();
}

void Element::innerHTML(const jsbind::Any& value) {
    Node::set("innerHTML", value);
}

jsbind::Any Element::outerHTML() const {
    return Node::get("outerHTML").as<jsbind::Any>();
}

void Element::outerHTML(const jsbind::Any& value) {
    Node::set("outerHTML", value);
}

jsbind::Undefined Element::insertAdjacentHTML(const jsbind::String& position, const jsbind::Any& string) {
    return Node::call("insertAdjacentHTML", position, string).as<jsbind::Undefined>();
}

jsbind::Undefined Element::setPointerCapture(long pointerId) {
    return Node::call("setPointerCapture", pointerId).as<jsbind::Undefined>();
}

jsbind::Undefined Element::releasePointerCapture(long pointerId) {
    return Node::call("releasePointerCapture", pointerId).as<jsbind::Undefined>();
}

bool Element::hasPointerCapture(long pointerId) {
    return Node::call("hasPointerCapture", pointerId).as<bool>();
}

jsbind::Promise<jsbind::Undefined> Element::requestPointerLock() {
    return Node::call("requestPointerLock").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Element::requestPointerLock(const PointerLockOptions& options) {
    return Node::call("requestPointerLock", options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::String Element::regionOverset() const {
    return Node::get("regionOverset").as<jsbind::String>();
}

jsbind::TypedArray<Range> Element::getRegionFlowRanges() {
    return Node::call("getRegionFlowRanges").as<jsbind::TypedArray<Range>>();
}

jsbind::TypedArray<DOMQuad> Element::getBoxQuads() {
    return Node::call("getBoxQuads").as<jsbind::TypedArray<DOMQuad>>();
}

jsbind::TypedArray<DOMQuad> Element::getBoxQuads(const BoxQuadOptions& options) {
    return Node::call("getBoxQuads", options).as<jsbind::TypedArray<DOMQuad>>();
}

DOMQuad Element::convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from) {
    return Node::call("convertQuadFromNode", quad, from).as<DOMQuad>();
}

DOMQuad Element::convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return Node::call("convertQuadFromNode", quad, from, options).as<DOMQuad>();
}

DOMQuad Element::convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from) {
    return Node::call("convertRectFromNode", rect, from).as<DOMQuad>();
}

DOMQuad Element::convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return Node::call("convertRectFromNode", rect, from, options).as<DOMQuad>();
}

DOMPoint Element::convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from) {
    return Node::call("convertPointFromNode", point, from).as<DOMPoint>();
}

DOMPoint Element::convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return Node::call("convertPointFromNode", point, from, options).as<DOMPoint>();
}

HTMLCollection Element::children() const {
    return Node::get("children").as<HTMLCollection>();
}

Element Element::firstElementChild() const {
    return Node::get("firstElementChild").as<Element>();
}

Element Element::lastElementChild() const {
    return Node::get("lastElementChild").as<Element>();
}

unsigned long Element::childElementCount() const {
    return Node::get("childElementCount").as<unsigned long>();
}

jsbind::Undefined Element::prepend(const jsbind::Any& nodes) {
    return Node::call("prepend", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined Element::append(const jsbind::Any& nodes) {
    return Node::call("append", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined Element::replaceChildren(const jsbind::Any& nodes) {
    return Node::call("replaceChildren", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined Element::moveBefore(const Node& node, const Node& child) {
    return Node::call("moveBefore", node, child).as<jsbind::Undefined>();
}

Element Element::querySelector(const jsbind::String& selectors) {
    return Node::call("querySelector", selectors).as<Element>();
}

NodeList Element::querySelectorAll(const jsbind::String& selectors) {
    return Node::call("querySelectorAll", selectors).as<NodeList>();
}

Element Element::previousElementSibling() const {
    return Node::get("previousElementSibling").as<Element>();
}

Element Element::nextElementSibling() const {
    return Node::get("nextElementSibling").as<Element>();
}

jsbind::Undefined Element::before(const jsbind::Any& nodes) {
    return Node::call("before", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined Element::after(const jsbind::Any& nodes) {
    return Node::call("after", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined Element::replaceWith(const jsbind::Any& nodes) {
    return Node::call("replaceWith", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined Element::remove() {
    return Node::call("remove").as<jsbind::Undefined>();
}

HTMLSlotElement Element::assignedSlot() const {
    return Node::get("assignedSlot").as<HTMLSlotElement>();
}

jsbind::String Element::role() const {
    return Node::get("role").as<jsbind::String>();
}

void Element::role(const jsbind::String& value) {
    Node::set("role", value);
}

Element Element::ariaActiveDescendantElement() const {
    return Node::get("ariaActiveDescendantElement").as<Element>();
}

void Element::ariaActiveDescendantElement(const Element& value) {
    Node::set("ariaActiveDescendantElement", value);
}

jsbind::String Element::ariaAtomic() const {
    return Node::get("ariaAtomic").as<jsbind::String>();
}

void Element::ariaAtomic(const jsbind::String& value) {
    Node::set("ariaAtomic", value);
}

jsbind::String Element::ariaAutoComplete() const {
    return Node::get("ariaAutoComplete").as<jsbind::String>();
}

void Element::ariaAutoComplete(const jsbind::String& value) {
    Node::set("ariaAutoComplete", value);
}

jsbind::String Element::ariaBrailleLabel() const {
    return Node::get("ariaBrailleLabel").as<jsbind::String>();
}

void Element::ariaBrailleLabel(const jsbind::String& value) {
    Node::set("ariaBrailleLabel", value);
}

jsbind::String Element::ariaBrailleRoleDescription() const {
    return Node::get("ariaBrailleRoleDescription").as<jsbind::String>();
}

void Element::ariaBrailleRoleDescription(const jsbind::String& value) {
    Node::set("ariaBrailleRoleDescription", value);
}

jsbind::String Element::ariaBusy() const {
    return Node::get("ariaBusy").as<jsbind::String>();
}

void Element::ariaBusy(const jsbind::String& value) {
    Node::set("ariaBusy", value);
}

jsbind::String Element::ariaChecked() const {
    return Node::get("ariaChecked").as<jsbind::String>();
}

void Element::ariaChecked(const jsbind::String& value) {
    Node::set("ariaChecked", value);
}

jsbind::String Element::ariaColCount() const {
    return Node::get("ariaColCount").as<jsbind::String>();
}

void Element::ariaColCount(const jsbind::String& value) {
    Node::set("ariaColCount", value);
}

jsbind::String Element::ariaColIndex() const {
    return Node::get("ariaColIndex").as<jsbind::String>();
}

void Element::ariaColIndex(const jsbind::String& value) {
    Node::set("ariaColIndex", value);
}

jsbind::String Element::ariaColIndexText() const {
    return Node::get("ariaColIndexText").as<jsbind::String>();
}

void Element::ariaColIndexText(const jsbind::String& value) {
    Node::set("ariaColIndexText", value);
}

jsbind::String Element::ariaColSpan() const {
    return Node::get("ariaColSpan").as<jsbind::String>();
}

void Element::ariaColSpan(const jsbind::String& value) {
    Node::set("ariaColSpan", value);
}

jsbind::TypedArray<Element> Element::ariaControlsElements() const {
    return Node::get("ariaControlsElements").as<jsbind::TypedArray<Element>>();
}

void Element::ariaControlsElements(const jsbind::TypedArray<Element>& value) {
    Node::set("ariaControlsElements", value);
}

jsbind::String Element::ariaCurrent() const {
    return Node::get("ariaCurrent").as<jsbind::String>();
}

void Element::ariaCurrent(const jsbind::String& value) {
    Node::set("ariaCurrent", value);
}

jsbind::TypedArray<Element> Element::ariaDescribedByElements() const {
    return Node::get("ariaDescribedByElements").as<jsbind::TypedArray<Element>>();
}

void Element::ariaDescribedByElements(const jsbind::TypedArray<Element>& value) {
    Node::set("ariaDescribedByElements", value);
}

jsbind::String Element::ariaDescription() const {
    return Node::get("ariaDescription").as<jsbind::String>();
}

void Element::ariaDescription(const jsbind::String& value) {
    Node::set("ariaDescription", value);
}

jsbind::TypedArray<Element> Element::ariaDetailsElements() const {
    return Node::get("ariaDetailsElements").as<jsbind::TypedArray<Element>>();
}

void Element::ariaDetailsElements(const jsbind::TypedArray<Element>& value) {
    Node::set("ariaDetailsElements", value);
}

jsbind::String Element::ariaDisabled() const {
    return Node::get("ariaDisabled").as<jsbind::String>();
}

void Element::ariaDisabled(const jsbind::String& value) {
    Node::set("ariaDisabled", value);
}

jsbind::TypedArray<Element> Element::ariaErrorMessageElements() const {
    return Node::get("ariaErrorMessageElements").as<jsbind::TypedArray<Element>>();
}

void Element::ariaErrorMessageElements(const jsbind::TypedArray<Element>& value) {
    Node::set("ariaErrorMessageElements", value);
}

jsbind::String Element::ariaExpanded() const {
    return Node::get("ariaExpanded").as<jsbind::String>();
}

void Element::ariaExpanded(const jsbind::String& value) {
    Node::set("ariaExpanded", value);
}

jsbind::TypedArray<Element> Element::ariaFlowToElements() const {
    return Node::get("ariaFlowToElements").as<jsbind::TypedArray<Element>>();
}

void Element::ariaFlowToElements(const jsbind::TypedArray<Element>& value) {
    Node::set("ariaFlowToElements", value);
}

jsbind::String Element::ariaHasPopup() const {
    return Node::get("ariaHasPopup").as<jsbind::String>();
}

void Element::ariaHasPopup(const jsbind::String& value) {
    Node::set("ariaHasPopup", value);
}

jsbind::String Element::ariaHidden() const {
    return Node::get("ariaHidden").as<jsbind::String>();
}

void Element::ariaHidden(const jsbind::String& value) {
    Node::set("ariaHidden", value);
}

jsbind::String Element::ariaInvalid() const {
    return Node::get("ariaInvalid").as<jsbind::String>();
}

void Element::ariaInvalid(const jsbind::String& value) {
    Node::set("ariaInvalid", value);
}

jsbind::String Element::ariaKeyShortcuts() const {
    return Node::get("ariaKeyShortcuts").as<jsbind::String>();
}

void Element::ariaKeyShortcuts(const jsbind::String& value) {
    Node::set("ariaKeyShortcuts", value);
}

jsbind::String Element::ariaLabel() const {
    return Node::get("ariaLabel").as<jsbind::String>();
}

void Element::ariaLabel(const jsbind::String& value) {
    Node::set("ariaLabel", value);
}

jsbind::TypedArray<Element> Element::ariaLabelledByElements() const {
    return Node::get("ariaLabelledByElements").as<jsbind::TypedArray<Element>>();
}

void Element::ariaLabelledByElements(const jsbind::TypedArray<Element>& value) {
    Node::set("ariaLabelledByElements", value);
}

jsbind::String Element::ariaLevel() const {
    return Node::get("ariaLevel").as<jsbind::String>();
}

void Element::ariaLevel(const jsbind::String& value) {
    Node::set("ariaLevel", value);
}

jsbind::String Element::ariaLive() const {
    return Node::get("ariaLive").as<jsbind::String>();
}

void Element::ariaLive(const jsbind::String& value) {
    Node::set("ariaLive", value);
}

jsbind::String Element::ariaModal() const {
    return Node::get("ariaModal").as<jsbind::String>();
}

void Element::ariaModal(const jsbind::String& value) {
    Node::set("ariaModal", value);
}

jsbind::String Element::ariaMultiLine() const {
    return Node::get("ariaMultiLine").as<jsbind::String>();
}

void Element::ariaMultiLine(const jsbind::String& value) {
    Node::set("ariaMultiLine", value);
}

jsbind::String Element::ariaMultiSelectable() const {
    return Node::get("ariaMultiSelectable").as<jsbind::String>();
}

void Element::ariaMultiSelectable(const jsbind::String& value) {
    Node::set("ariaMultiSelectable", value);
}

jsbind::String Element::ariaOrientation() const {
    return Node::get("ariaOrientation").as<jsbind::String>();
}

void Element::ariaOrientation(const jsbind::String& value) {
    Node::set("ariaOrientation", value);
}

jsbind::TypedArray<Element> Element::ariaOwnsElements() const {
    return Node::get("ariaOwnsElements").as<jsbind::TypedArray<Element>>();
}

void Element::ariaOwnsElements(const jsbind::TypedArray<Element>& value) {
    Node::set("ariaOwnsElements", value);
}

jsbind::String Element::ariaPlaceholder() const {
    return Node::get("ariaPlaceholder").as<jsbind::String>();
}

void Element::ariaPlaceholder(const jsbind::String& value) {
    Node::set("ariaPlaceholder", value);
}

jsbind::String Element::ariaPosInSet() const {
    return Node::get("ariaPosInSet").as<jsbind::String>();
}

void Element::ariaPosInSet(const jsbind::String& value) {
    Node::set("ariaPosInSet", value);
}

jsbind::String Element::ariaPressed() const {
    return Node::get("ariaPressed").as<jsbind::String>();
}

void Element::ariaPressed(const jsbind::String& value) {
    Node::set("ariaPressed", value);
}

jsbind::String Element::ariaReadOnly() const {
    return Node::get("ariaReadOnly").as<jsbind::String>();
}

void Element::ariaReadOnly(const jsbind::String& value) {
    Node::set("ariaReadOnly", value);
}

jsbind::String Element::ariaRelevant() const {
    return Node::get("ariaRelevant").as<jsbind::String>();
}

void Element::ariaRelevant(const jsbind::String& value) {
    Node::set("ariaRelevant", value);
}

jsbind::String Element::ariaRequired() const {
    return Node::get("ariaRequired").as<jsbind::String>();
}

void Element::ariaRequired(const jsbind::String& value) {
    Node::set("ariaRequired", value);
}

jsbind::String Element::ariaRoleDescription() const {
    return Node::get("ariaRoleDescription").as<jsbind::String>();
}

void Element::ariaRoleDescription(const jsbind::String& value) {
    Node::set("ariaRoleDescription", value);
}

jsbind::String Element::ariaRowCount() const {
    return Node::get("ariaRowCount").as<jsbind::String>();
}

void Element::ariaRowCount(const jsbind::String& value) {
    Node::set("ariaRowCount", value);
}

jsbind::String Element::ariaRowIndex() const {
    return Node::get("ariaRowIndex").as<jsbind::String>();
}

void Element::ariaRowIndex(const jsbind::String& value) {
    Node::set("ariaRowIndex", value);
}

jsbind::String Element::ariaRowIndexText() const {
    return Node::get("ariaRowIndexText").as<jsbind::String>();
}

void Element::ariaRowIndexText(const jsbind::String& value) {
    Node::set("ariaRowIndexText", value);
}

jsbind::String Element::ariaRowSpan() const {
    return Node::get("ariaRowSpan").as<jsbind::String>();
}

void Element::ariaRowSpan(const jsbind::String& value) {
    Node::set("ariaRowSpan", value);
}

jsbind::String Element::ariaSelected() const {
    return Node::get("ariaSelected").as<jsbind::String>();
}

void Element::ariaSelected(const jsbind::String& value) {
    Node::set("ariaSelected", value);
}

jsbind::String Element::ariaSetSize() const {
    return Node::get("ariaSetSize").as<jsbind::String>();
}

void Element::ariaSetSize(const jsbind::String& value) {
    Node::set("ariaSetSize", value);
}

jsbind::String Element::ariaSort() const {
    return Node::get("ariaSort").as<jsbind::String>();
}

void Element::ariaSort(const jsbind::String& value) {
    Node::set("ariaSort", value);
}

jsbind::String Element::ariaValueMax() const {
    return Node::get("ariaValueMax").as<jsbind::String>();
}

void Element::ariaValueMax(const jsbind::String& value) {
    Node::set("ariaValueMax", value);
}

jsbind::String Element::ariaValueMin() const {
    return Node::get("ariaValueMin").as<jsbind::String>();
}

void Element::ariaValueMin(const jsbind::String& value) {
    Node::set("ariaValueMin", value);
}

jsbind::String Element::ariaValueNow() const {
    return Node::get("ariaValueNow").as<jsbind::String>();
}

void Element::ariaValueNow(const jsbind::String& value) {
    Node::set("ariaValueNow", value);
}

jsbind::String Element::ariaValueText() const {
    return Node::get("ariaValueText").as<jsbind::String>();
}

void Element::ariaValueText(const jsbind::String& value) {
    Node::set("ariaValueText", value);
}

Animation Element::animate(const jsbind::Object& keyframes) {
    return Node::call("animate", keyframes).as<Animation>();
}

Animation Element::animate(const jsbind::Object& keyframes, const jsbind::Any& options) {
    return Node::call("animate", keyframes, options).as<Animation>();
}

jsbind::TypedArray<Animation> Element::getAnimations() {
    return Node::call("getAnimations").as<jsbind::TypedArray<Animation>>();
}

jsbind::TypedArray<Animation> Element::getAnimations(const GetAnimationsOptions& options) {
    return Node::call("getAnimations", options).as<jsbind::TypedArray<Animation>>();
}


} // namespace webbind