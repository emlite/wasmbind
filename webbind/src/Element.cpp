#include <webbind/Element.hpp>
#include <webbind/DOMTokenList.hpp>
#include <webbind/NamedNodeMap.hpp>
#include <webbind/Attr.hpp>
#include <webbind/ShadowRoot.hpp>
#include <webbind/CustomElementRegistry.hpp>
#include <webbind/HTMLCollection.hpp>
#include <webbind/CSSPseudoElement.hpp>
#include <webbind/StylePropertyMapReadOnly.hpp>
#include <webbind/DOMRectList.hpp>
#include <webbind/DOMRect.hpp>
#include <webbind/Range.hpp>
#include <webbind/DOMQuad.hpp>
#include <webbind/Document.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/DOMPoint.hpp>
#include <webbind/SVGGeometryElement.hpp>
#include <webbind/NodeList.hpp>
#include <webbind/HTMLSlotElement.hpp>
#include <webbind/Animation.hpp>
#include <webbind/ScreenDetailed.hpp>


ShadowRootInit::ShadowRootInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ShadowRootInit ShadowRootInit::take_ownership(Handle h) noexcept {
        return ShadowRootInit(h);
    }
ShadowRootInit::ShadowRootInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
ShadowRootInit::ShadowRootInit() noexcept: emlite::Val(emlite::Val::object()) {}
ShadowRootInit ShadowRootInit::clone() const noexcept { return *this; }

ShadowRootMode ShadowRootInit::mode() const {
    return emlite::Val::get("mode").as<ShadowRootMode>();
}

void ShadowRootInit::mode(const ShadowRootMode& value) {
    emlite::Val::set("mode", value);
}

bool ShadowRootInit::delegatesFocus() const {
    return emlite::Val::get("delegatesFocus").as<bool>();
}

void ShadowRootInit::delegatesFocus(bool value) {
    emlite::Val::set("delegatesFocus", value);
}

SlotAssignmentMode ShadowRootInit::slotAssignment() const {
    return emlite::Val::get("slotAssignment").as<SlotAssignmentMode>();
}

void ShadowRootInit::slotAssignment(const SlotAssignmentMode& value) {
    emlite::Val::set("slotAssignment", value);
}

bool ShadowRootInit::clonable() const {
    return emlite::Val::get("clonable").as<bool>();
}

void ShadowRootInit::clonable(bool value) {
    emlite::Val::set("clonable", value);
}

bool ShadowRootInit::serializable() const {
    return emlite::Val::get("serializable").as<bool>();
}

void ShadowRootInit::serializable(bool value) {
    emlite::Val::set("serializable", value);
}

CustomElementRegistry ShadowRootInit::customElementRegistry() const {
    return emlite::Val::get("customElementRegistry").as<CustomElementRegistry>();
}

void ShadowRootInit::customElementRegistry(const CustomElementRegistry& value) {
    emlite::Val::set("customElementRegistry", value);
}

FocusableAreasOption::FocusableAreasOption(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FocusableAreasOption FocusableAreasOption::take_ownership(Handle h) noexcept {
        return FocusableAreasOption(h);
    }
FocusableAreasOption::FocusableAreasOption(const emlite::Val &val) noexcept: emlite::Val(val) {}
FocusableAreasOption::FocusableAreasOption() noexcept: emlite::Val(emlite::Val::object()) {}
FocusableAreasOption FocusableAreasOption::clone() const noexcept { return *this; }

FocusableAreaSearchMode FocusableAreasOption::mode() const {
    return emlite::Val::get("mode").as<FocusableAreaSearchMode>();
}

void FocusableAreasOption::mode(const FocusableAreaSearchMode& value) {
    emlite::Val::set("mode", value);
}

SpatialNavigationSearchOptions::SpatialNavigationSearchOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SpatialNavigationSearchOptions SpatialNavigationSearchOptions::take_ownership(Handle h) noexcept {
        return SpatialNavigationSearchOptions(h);
    }
SpatialNavigationSearchOptions::SpatialNavigationSearchOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SpatialNavigationSearchOptions::SpatialNavigationSearchOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SpatialNavigationSearchOptions SpatialNavigationSearchOptions::clone() const noexcept { return *this; }

jsbind::Sequence<Node> SpatialNavigationSearchOptions::candidates() const {
    return emlite::Val::get("candidates").as<jsbind::Sequence<Node>>();
}

void SpatialNavigationSearchOptions::candidates(const jsbind::Sequence<Node>& value) {
    emlite::Val::set("candidates", value);
}

Node SpatialNavigationSearchOptions::container() const {
    return emlite::Val::get("container").as<Node>();
}

void SpatialNavigationSearchOptions::container(const Node& value) {
    emlite::Val::set("container", value);
}

CheckVisibilityOptions::CheckVisibilityOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CheckVisibilityOptions CheckVisibilityOptions::take_ownership(Handle h) noexcept {
        return CheckVisibilityOptions(h);
    }
CheckVisibilityOptions::CheckVisibilityOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
CheckVisibilityOptions::CheckVisibilityOptions() noexcept: emlite::Val(emlite::Val::object()) {}
CheckVisibilityOptions CheckVisibilityOptions::clone() const noexcept { return *this; }

bool CheckVisibilityOptions::checkOpacity() const {
    return emlite::Val::get("checkOpacity").as<bool>();
}

void CheckVisibilityOptions::checkOpacity(bool value) {
    emlite::Val::set("checkOpacity", value);
}

bool CheckVisibilityOptions::checkVisibilityCSS() const {
    return emlite::Val::get("checkVisibilityCSS").as<bool>();
}

void CheckVisibilityOptions::checkVisibilityCSS(bool value) {
    emlite::Val::set("checkVisibilityCSS", value);
}

bool CheckVisibilityOptions::contentVisibilityAuto() const {
    return emlite::Val::get("contentVisibilityAuto").as<bool>();
}

void CheckVisibilityOptions::contentVisibilityAuto(bool value) {
    emlite::Val::set("contentVisibilityAuto", value);
}

bool CheckVisibilityOptions::opacityProperty() const {
    return emlite::Val::get("opacityProperty").as<bool>();
}

void CheckVisibilityOptions::opacityProperty(bool value) {
    emlite::Val::set("opacityProperty", value);
}

bool CheckVisibilityOptions::visibilityProperty() const {
    return emlite::Val::get("visibilityProperty").as<bool>();
}

void CheckVisibilityOptions::visibilityProperty(bool value) {
    emlite::Val::set("visibilityProperty", value);
}

FullscreenOptions::FullscreenOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FullscreenOptions FullscreenOptions::take_ownership(Handle h) noexcept {
        return FullscreenOptions(h);
    }
FullscreenOptions::FullscreenOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
FullscreenOptions::FullscreenOptions() noexcept: emlite::Val(emlite::Val::object()) {}
FullscreenOptions FullscreenOptions::clone() const noexcept { return *this; }

ScreenDetailed FullscreenOptions::screen() const {
    return emlite::Val::get("screen").as<ScreenDetailed>();
}

void FullscreenOptions::screen(const ScreenDetailed& value) {
    emlite::Val::set("screen", value);
}

GetHTMLOptions::GetHTMLOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GetHTMLOptions GetHTMLOptions::take_ownership(Handle h) noexcept {
        return GetHTMLOptions(h);
    }
GetHTMLOptions::GetHTMLOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
GetHTMLOptions::GetHTMLOptions() noexcept: emlite::Val(emlite::Val::object()) {}
GetHTMLOptions GetHTMLOptions::clone() const noexcept { return *this; }

bool GetHTMLOptions::serializableShadowRoots() const {
    return emlite::Val::get("serializableShadowRoots").as<bool>();
}

void GetHTMLOptions::serializableShadowRoots(bool value) {
    emlite::Val::set("serializableShadowRoots", value);
}

jsbind::Sequence<ShadowRoot> GetHTMLOptions::shadowRoots() const {
    return emlite::Val::get("shadowRoots").as<jsbind::Sequence<ShadowRoot>>();
}

void GetHTMLOptions::shadowRoots(const jsbind::Sequence<ShadowRoot>& value) {
    emlite::Val::set("shadowRoots", value);
}

PointerLockOptions::PointerLockOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PointerLockOptions PointerLockOptions::take_ownership(Handle h) noexcept {
        return PointerLockOptions(h);
    }
PointerLockOptions::PointerLockOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PointerLockOptions::PointerLockOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PointerLockOptions PointerLockOptions::clone() const noexcept { return *this; }

bool PointerLockOptions::unadjustedMovement() const {
    return emlite::Val::get("unadjustedMovement").as<bool>();
}

void PointerLockOptions::unadjustedMovement(bool value) {
    emlite::Val::set("unadjustedMovement", value);
}

GetAnimationsOptions::GetAnimationsOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GetAnimationsOptions GetAnimationsOptions::take_ownership(Handle h) noexcept {
        return GetAnimationsOptions(h);
    }
GetAnimationsOptions::GetAnimationsOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
GetAnimationsOptions::GetAnimationsOptions() noexcept: emlite::Val(emlite::Val::object()) {}
GetAnimationsOptions GetAnimationsOptions::clone() const noexcept { return *this; }

bool GetAnimationsOptions::subtree() const {
    return emlite::Val::get("subtree").as<bool>();
}

void GetAnimationsOptions::subtree(bool value) {
    emlite::Val::set("subtree", value);
}

jsbind::CSSOMString GetAnimationsOptions::pseudoElement() const {
    return emlite::Val::get("pseudoElement").as<jsbind::CSSOMString>();
}

void GetAnimationsOptions::pseudoElement(const jsbind::CSSOMString& value) {
    emlite::Val::set("pseudoElement", value);
}

Element Element::take_ownership(Handle h) noexcept {
        return Element(h);
    }
Element Element::clone() const noexcept { return *this; }
Element::Element(Handle h) noexcept : Node(emlite::Val::take_ownership(h)) {}
Element::Element(const emlite::Val &val) noexcept: Node(val) {}


jsbind::DOMString Element::namespaceURI() const {
    return Node::get("namespaceURI").as<jsbind::DOMString>();
}

jsbind::DOMString Element::prefix() const {
    return Node::get("prefix").as<jsbind::DOMString>();
}

jsbind::DOMString Element::localName() const {
    return Node::get("localName").as<jsbind::DOMString>();
}

jsbind::DOMString Element::tagName() const {
    return Node::get("tagName").as<jsbind::DOMString>();
}

jsbind::DOMString Element::id() const {
    return Node::get("id").as<jsbind::DOMString>();
}

void Element::id(const jsbind::DOMString& value) {
    Node::set("id", value);
}

jsbind::DOMString Element::className() const {
    return Node::get("className").as<jsbind::DOMString>();
}

void Element::className(const jsbind::DOMString& value) {
    Node::set("className", value);
}

DOMTokenList Element::classList() const {
    return Node::get("classList").as<DOMTokenList>();
}

jsbind::DOMString Element::slot() const {
    return Node::get("slot").as<jsbind::DOMString>();
}

void Element::slot(const jsbind::DOMString& value) {
    Node::set("slot", value);
}

bool Element::hasAttributes() {
    return Node::call("hasAttributes").as<bool>();
}

NamedNodeMap Element::attributes() const {
    return Node::get("attributes").as<NamedNodeMap>();
}

jsbind::Sequence<jsbind::DOMString> Element::getAttributeNames() {
    return Node::call("getAttributeNames").as<jsbind::Sequence<jsbind::DOMString>>();
}

jsbind::DOMString Element::getAttribute(const jsbind::DOMString& qualifiedName) {
    return Node::call("getAttribute", qualifiedName).as<jsbind::DOMString>();
}

jsbind::DOMString Element::getAttributeNS(const jsbind::DOMString& namespace_, const jsbind::DOMString& localName) {
    return Node::call("getAttributeNS", namespace_, localName).as<jsbind::DOMString>();
}

jsbind::Undefined Element::setAttribute(const jsbind::DOMString& qualifiedName, const jsbind::DOMString& value) {
    return Node::call("setAttribute", qualifiedName, value).as<jsbind::Undefined>();
}

jsbind::Undefined Element::setAttributeNS(const jsbind::DOMString& namespace_, const jsbind::DOMString& qualifiedName, const jsbind::DOMString& value) {
    return Node::call("setAttributeNS", namespace_, qualifiedName, value).as<jsbind::Undefined>();
}

jsbind::Undefined Element::removeAttribute(const jsbind::DOMString& qualifiedName) {
    return Node::call("removeAttribute", qualifiedName).as<jsbind::Undefined>();
}

jsbind::Undefined Element::removeAttributeNS(const jsbind::DOMString& namespace_, const jsbind::DOMString& localName) {
    return Node::call("removeAttributeNS", namespace_, localName).as<jsbind::Undefined>();
}

bool Element::toggleAttribute(const jsbind::DOMString& qualifiedName, bool force) {
    return Node::call("toggleAttribute", qualifiedName, force).as<bool>();
}

bool Element::hasAttribute(const jsbind::DOMString& qualifiedName) {
    return Node::call("hasAttribute", qualifiedName).as<bool>();
}

bool Element::hasAttributeNS(const jsbind::DOMString& namespace_, const jsbind::DOMString& localName) {
    return Node::call("hasAttributeNS", namespace_, localName).as<bool>();
}

Attr Element::getAttributeNode(const jsbind::DOMString& qualifiedName) {
    return Node::call("getAttributeNode", qualifiedName).as<Attr>();
}

Attr Element::getAttributeNodeNS(const jsbind::DOMString& namespace_, const jsbind::DOMString& localName) {
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

Element Element::closest(const jsbind::DOMString& selectors) {
    return Node::call("closest", selectors).as<Element>();
}

bool Element::matches(const jsbind::DOMString& selectors) {
    return Node::call("matches", selectors).as<bool>();
}

bool Element::webkitMatchesSelector(const jsbind::DOMString& selectors) {
    return Node::call("webkitMatchesSelector", selectors).as<bool>();
}

HTMLCollection Element::getElementsByTagName(const jsbind::DOMString& qualifiedName) {
    return Node::call("getElementsByTagName", qualifiedName).as<HTMLCollection>();
}

HTMLCollection Element::getElementsByTagNameNS(const jsbind::DOMString& namespace_, const jsbind::DOMString& localName) {
    return Node::call("getElementsByTagNameNS", namespace_, localName).as<HTMLCollection>();
}

HTMLCollection Element::getElementsByClassName(const jsbind::DOMString& classNames) {
    return Node::call("getElementsByClassName", classNames).as<HTMLCollection>();
}

Element Element::insertAdjacentElement(const jsbind::DOMString& where, const Element& element) {
    return Node::call("insertAdjacentElement", where, element).as<Element>();
}

jsbind::Undefined Element::insertAdjacentText(const jsbind::DOMString& where, const jsbind::DOMString& data) {
    return Node::call("insertAdjacentText", where, data).as<jsbind::Undefined>();
}

Node Element::getSpatialNavigationContainer() {
    return Node::call("getSpatialNavigationContainer").as<Node>();
}

jsbind::Sequence<Node> Element::focusableAreas(const FocusableAreasOption& option) {
    return Node::call("focusableAreas", option).as<jsbind::Sequence<Node>>();
}

Node Element::spatialNavigationSearch(const SpatialNavigationDirection& dir, const SpatialNavigationSearchOptions& options) {
    return Node::call("spatialNavigationSearch", dir, options).as<Node>();
}

CSSPseudoElement Element::pseudo(const jsbind::CSSOMString& type) {
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

bool Element::checkVisibility(const CheckVisibilityOptions& options) {
    return Node::call("checkVisibility", options).as<bool>();
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

jsbind::DOMString Element::elementTiming() const {
    return Node::get("elementTiming").as<jsbind::DOMString>();
}

void Element::elementTiming(const jsbind::DOMString& value) {
    Node::set("elementTiming", value);
}

jsbind::Promise Element::requestFullscreen(const FullscreenOptions& options) {
    return Node::call("requestFullscreen", options).as<jsbind::Promise>();
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

jsbind::DOMString Element::getHTML(const GetHTMLOptions& options) {
    return Node::call("getHTML", options).as<jsbind::DOMString>();
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

jsbind::Undefined Element::insertAdjacentHTML(const jsbind::DOMString& position, const jsbind::Any& string) {
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

jsbind::Promise Element::requestPointerLock(const PointerLockOptions& options) {
    return Node::call("requestPointerLock", options).as<jsbind::Promise>();
}

jsbind::CSSOMString Element::regionOverset() const {
    return Node::get("regionOverset").as<jsbind::CSSOMString>();
}

jsbind::Sequence<Range> Element::getRegionFlowRanges() {
    return Node::call("getRegionFlowRanges").as<jsbind::Sequence<Range>>();
}

jsbind::Sequence<DOMQuad> Element::getBoxQuads(const BoxQuadOptions& options) {
    return Node::call("getBoxQuads", options).as<jsbind::Sequence<DOMQuad>>();
}

DOMQuad Element::convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return Node::call("convertQuadFromNode", quad, from, options).as<DOMQuad>();
}

DOMQuad Element::convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return Node::call("convertRectFromNode", rect, from, options).as<DOMQuad>();
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

Element Element::querySelector(const jsbind::DOMString& selectors) {
    return Node::call("querySelector", selectors).as<Element>();
}

NodeList Element::querySelectorAll(const jsbind::DOMString& selectors) {
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

jsbind::DOMString Element::role() const {
    return Node::get("role").as<jsbind::DOMString>();
}

void Element::role(const jsbind::DOMString& value) {
    Node::set("role", value);
}

Element Element::ariaActiveDescendantElement() const {
    return Node::get("ariaActiveDescendantElement").as<Element>();
}

void Element::ariaActiveDescendantElement(const Element& value) {
    Node::set("ariaActiveDescendantElement", value);
}

jsbind::DOMString Element::ariaAtomic() const {
    return Node::get("ariaAtomic").as<jsbind::DOMString>();
}

void Element::ariaAtomic(const jsbind::DOMString& value) {
    Node::set("ariaAtomic", value);
}

jsbind::DOMString Element::ariaAutoComplete() const {
    return Node::get("ariaAutoComplete").as<jsbind::DOMString>();
}

void Element::ariaAutoComplete(const jsbind::DOMString& value) {
    Node::set("ariaAutoComplete", value);
}

jsbind::DOMString Element::ariaBrailleLabel() const {
    return Node::get("ariaBrailleLabel").as<jsbind::DOMString>();
}

void Element::ariaBrailleLabel(const jsbind::DOMString& value) {
    Node::set("ariaBrailleLabel", value);
}

jsbind::DOMString Element::ariaBrailleRoleDescription() const {
    return Node::get("ariaBrailleRoleDescription").as<jsbind::DOMString>();
}

void Element::ariaBrailleRoleDescription(const jsbind::DOMString& value) {
    Node::set("ariaBrailleRoleDescription", value);
}

jsbind::DOMString Element::ariaBusy() const {
    return Node::get("ariaBusy").as<jsbind::DOMString>();
}

void Element::ariaBusy(const jsbind::DOMString& value) {
    Node::set("ariaBusy", value);
}

jsbind::DOMString Element::ariaChecked() const {
    return Node::get("ariaChecked").as<jsbind::DOMString>();
}

void Element::ariaChecked(const jsbind::DOMString& value) {
    Node::set("ariaChecked", value);
}

jsbind::DOMString Element::ariaColCount() const {
    return Node::get("ariaColCount").as<jsbind::DOMString>();
}

void Element::ariaColCount(const jsbind::DOMString& value) {
    Node::set("ariaColCount", value);
}

jsbind::DOMString Element::ariaColIndex() const {
    return Node::get("ariaColIndex").as<jsbind::DOMString>();
}

void Element::ariaColIndex(const jsbind::DOMString& value) {
    Node::set("ariaColIndex", value);
}

jsbind::DOMString Element::ariaColIndexText() const {
    return Node::get("ariaColIndexText").as<jsbind::DOMString>();
}

void Element::ariaColIndexText(const jsbind::DOMString& value) {
    Node::set("ariaColIndexText", value);
}

jsbind::DOMString Element::ariaColSpan() const {
    return Node::get("ariaColSpan").as<jsbind::DOMString>();
}

void Element::ariaColSpan(const jsbind::DOMString& value) {
    Node::set("ariaColSpan", value);
}

jsbind::FrozenArray<Element> Element::ariaControlsElements() const {
    return Node::get("ariaControlsElements").as<jsbind::FrozenArray<Element>>();
}

void Element::ariaControlsElements(const jsbind::FrozenArray<Element>& value) {
    Node::set("ariaControlsElements", value);
}

jsbind::DOMString Element::ariaCurrent() const {
    return Node::get("ariaCurrent").as<jsbind::DOMString>();
}

void Element::ariaCurrent(const jsbind::DOMString& value) {
    Node::set("ariaCurrent", value);
}

jsbind::FrozenArray<Element> Element::ariaDescribedByElements() const {
    return Node::get("ariaDescribedByElements").as<jsbind::FrozenArray<Element>>();
}

void Element::ariaDescribedByElements(const jsbind::FrozenArray<Element>& value) {
    Node::set("ariaDescribedByElements", value);
}

jsbind::DOMString Element::ariaDescription() const {
    return Node::get("ariaDescription").as<jsbind::DOMString>();
}

void Element::ariaDescription(const jsbind::DOMString& value) {
    Node::set("ariaDescription", value);
}

jsbind::FrozenArray<Element> Element::ariaDetailsElements() const {
    return Node::get("ariaDetailsElements").as<jsbind::FrozenArray<Element>>();
}

void Element::ariaDetailsElements(const jsbind::FrozenArray<Element>& value) {
    Node::set("ariaDetailsElements", value);
}

jsbind::DOMString Element::ariaDisabled() const {
    return Node::get("ariaDisabled").as<jsbind::DOMString>();
}

void Element::ariaDisabled(const jsbind::DOMString& value) {
    Node::set("ariaDisabled", value);
}

jsbind::FrozenArray<Element> Element::ariaErrorMessageElements() const {
    return Node::get("ariaErrorMessageElements").as<jsbind::FrozenArray<Element>>();
}

void Element::ariaErrorMessageElements(const jsbind::FrozenArray<Element>& value) {
    Node::set("ariaErrorMessageElements", value);
}

jsbind::DOMString Element::ariaExpanded() const {
    return Node::get("ariaExpanded").as<jsbind::DOMString>();
}

void Element::ariaExpanded(const jsbind::DOMString& value) {
    Node::set("ariaExpanded", value);
}

jsbind::FrozenArray<Element> Element::ariaFlowToElements() const {
    return Node::get("ariaFlowToElements").as<jsbind::FrozenArray<Element>>();
}

void Element::ariaFlowToElements(const jsbind::FrozenArray<Element>& value) {
    Node::set("ariaFlowToElements", value);
}

jsbind::DOMString Element::ariaHasPopup() const {
    return Node::get("ariaHasPopup").as<jsbind::DOMString>();
}

void Element::ariaHasPopup(const jsbind::DOMString& value) {
    Node::set("ariaHasPopup", value);
}

jsbind::DOMString Element::ariaHidden() const {
    return Node::get("ariaHidden").as<jsbind::DOMString>();
}

void Element::ariaHidden(const jsbind::DOMString& value) {
    Node::set("ariaHidden", value);
}

jsbind::DOMString Element::ariaInvalid() const {
    return Node::get("ariaInvalid").as<jsbind::DOMString>();
}

void Element::ariaInvalid(const jsbind::DOMString& value) {
    Node::set("ariaInvalid", value);
}

jsbind::DOMString Element::ariaKeyShortcuts() const {
    return Node::get("ariaKeyShortcuts").as<jsbind::DOMString>();
}

void Element::ariaKeyShortcuts(const jsbind::DOMString& value) {
    Node::set("ariaKeyShortcuts", value);
}

jsbind::DOMString Element::ariaLabel() const {
    return Node::get("ariaLabel").as<jsbind::DOMString>();
}

void Element::ariaLabel(const jsbind::DOMString& value) {
    Node::set("ariaLabel", value);
}

jsbind::FrozenArray<Element> Element::ariaLabelledByElements() const {
    return Node::get("ariaLabelledByElements").as<jsbind::FrozenArray<Element>>();
}

void Element::ariaLabelledByElements(const jsbind::FrozenArray<Element>& value) {
    Node::set("ariaLabelledByElements", value);
}

jsbind::DOMString Element::ariaLevel() const {
    return Node::get("ariaLevel").as<jsbind::DOMString>();
}

void Element::ariaLevel(const jsbind::DOMString& value) {
    Node::set("ariaLevel", value);
}

jsbind::DOMString Element::ariaLive() const {
    return Node::get("ariaLive").as<jsbind::DOMString>();
}

void Element::ariaLive(const jsbind::DOMString& value) {
    Node::set("ariaLive", value);
}

jsbind::DOMString Element::ariaModal() const {
    return Node::get("ariaModal").as<jsbind::DOMString>();
}

void Element::ariaModal(const jsbind::DOMString& value) {
    Node::set("ariaModal", value);
}

jsbind::DOMString Element::ariaMultiLine() const {
    return Node::get("ariaMultiLine").as<jsbind::DOMString>();
}

void Element::ariaMultiLine(const jsbind::DOMString& value) {
    Node::set("ariaMultiLine", value);
}

jsbind::DOMString Element::ariaMultiSelectable() const {
    return Node::get("ariaMultiSelectable").as<jsbind::DOMString>();
}

void Element::ariaMultiSelectable(const jsbind::DOMString& value) {
    Node::set("ariaMultiSelectable", value);
}

jsbind::DOMString Element::ariaOrientation() const {
    return Node::get("ariaOrientation").as<jsbind::DOMString>();
}

void Element::ariaOrientation(const jsbind::DOMString& value) {
    Node::set("ariaOrientation", value);
}

jsbind::FrozenArray<Element> Element::ariaOwnsElements() const {
    return Node::get("ariaOwnsElements").as<jsbind::FrozenArray<Element>>();
}

void Element::ariaOwnsElements(const jsbind::FrozenArray<Element>& value) {
    Node::set("ariaOwnsElements", value);
}

jsbind::DOMString Element::ariaPlaceholder() const {
    return Node::get("ariaPlaceholder").as<jsbind::DOMString>();
}

void Element::ariaPlaceholder(const jsbind::DOMString& value) {
    Node::set("ariaPlaceholder", value);
}

jsbind::DOMString Element::ariaPosInSet() const {
    return Node::get("ariaPosInSet").as<jsbind::DOMString>();
}

void Element::ariaPosInSet(const jsbind::DOMString& value) {
    Node::set("ariaPosInSet", value);
}

jsbind::DOMString Element::ariaPressed() const {
    return Node::get("ariaPressed").as<jsbind::DOMString>();
}

void Element::ariaPressed(const jsbind::DOMString& value) {
    Node::set("ariaPressed", value);
}

jsbind::DOMString Element::ariaReadOnly() const {
    return Node::get("ariaReadOnly").as<jsbind::DOMString>();
}

void Element::ariaReadOnly(const jsbind::DOMString& value) {
    Node::set("ariaReadOnly", value);
}

jsbind::DOMString Element::ariaRelevant() const {
    return Node::get("ariaRelevant").as<jsbind::DOMString>();
}

void Element::ariaRelevant(const jsbind::DOMString& value) {
    Node::set("ariaRelevant", value);
}

jsbind::DOMString Element::ariaRequired() const {
    return Node::get("ariaRequired").as<jsbind::DOMString>();
}

void Element::ariaRequired(const jsbind::DOMString& value) {
    Node::set("ariaRequired", value);
}

jsbind::DOMString Element::ariaRoleDescription() const {
    return Node::get("ariaRoleDescription").as<jsbind::DOMString>();
}

void Element::ariaRoleDescription(const jsbind::DOMString& value) {
    Node::set("ariaRoleDescription", value);
}

jsbind::DOMString Element::ariaRowCount() const {
    return Node::get("ariaRowCount").as<jsbind::DOMString>();
}

void Element::ariaRowCount(const jsbind::DOMString& value) {
    Node::set("ariaRowCount", value);
}

jsbind::DOMString Element::ariaRowIndex() const {
    return Node::get("ariaRowIndex").as<jsbind::DOMString>();
}

void Element::ariaRowIndex(const jsbind::DOMString& value) {
    Node::set("ariaRowIndex", value);
}

jsbind::DOMString Element::ariaRowIndexText() const {
    return Node::get("ariaRowIndexText").as<jsbind::DOMString>();
}

void Element::ariaRowIndexText(const jsbind::DOMString& value) {
    Node::set("ariaRowIndexText", value);
}

jsbind::DOMString Element::ariaRowSpan() const {
    return Node::get("ariaRowSpan").as<jsbind::DOMString>();
}

void Element::ariaRowSpan(const jsbind::DOMString& value) {
    Node::set("ariaRowSpan", value);
}

jsbind::DOMString Element::ariaSelected() const {
    return Node::get("ariaSelected").as<jsbind::DOMString>();
}

void Element::ariaSelected(const jsbind::DOMString& value) {
    Node::set("ariaSelected", value);
}

jsbind::DOMString Element::ariaSetSize() const {
    return Node::get("ariaSetSize").as<jsbind::DOMString>();
}

void Element::ariaSetSize(const jsbind::DOMString& value) {
    Node::set("ariaSetSize", value);
}

jsbind::DOMString Element::ariaSort() const {
    return Node::get("ariaSort").as<jsbind::DOMString>();
}

void Element::ariaSort(const jsbind::DOMString& value) {
    Node::set("ariaSort", value);
}

jsbind::DOMString Element::ariaValueMax() const {
    return Node::get("ariaValueMax").as<jsbind::DOMString>();
}

void Element::ariaValueMax(const jsbind::DOMString& value) {
    Node::set("ariaValueMax", value);
}

jsbind::DOMString Element::ariaValueMin() const {
    return Node::get("ariaValueMin").as<jsbind::DOMString>();
}

void Element::ariaValueMin(const jsbind::DOMString& value) {
    Node::set("ariaValueMin", value);
}

jsbind::DOMString Element::ariaValueNow() const {
    return Node::get("ariaValueNow").as<jsbind::DOMString>();
}

void Element::ariaValueNow(const jsbind::DOMString& value) {
    Node::set("ariaValueNow", value);
}

jsbind::DOMString Element::ariaValueText() const {
    return Node::get("ariaValueText").as<jsbind::DOMString>();
}

void Element::ariaValueText(const jsbind::DOMString& value) {
    Node::set("ariaValueText", value);
}

Animation Element::animate(const jsbind::Object& keyframes, const jsbind::Any& options) {
    return Node::call("animate", keyframes, options).as<Animation>();
}

jsbind::Sequence<Animation> Element::getAnimations(const GetAnimationsOptions& options) {
    return Node::call("getAnimations", options).as<jsbind::Sequence<Animation>>();
}

