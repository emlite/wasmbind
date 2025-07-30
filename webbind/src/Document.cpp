#include <webbind/Document.hpp>
#include <webbind/DOMImplementation.hpp>
#include <webbind/DocumentType.hpp>
#include <webbind/Element.hpp>
#include <webbind/HTMLCollection.hpp>
#include <webbind/DocumentFragment.hpp>
#include <webbind/Text.hpp>
#include <webbind/CDATASection.hpp>
#include <webbind/Comment.hpp>
#include <webbind/ProcessingInstruction.hpp>
#include <webbind/Attr.hpp>
#include <webbind/Event.hpp>
#include <webbind/Range.hpp>
#include <webbind/NodeIterator.hpp>
#include <webbind/TreeWalker.hpp>
#include <webbind/SVGSVGElement.hpp>
#include <webbind/NamedFlowMap.hpp>
#include <webbind/ViewTransition.hpp>
#include <webbind/CaretPosition.hpp>
#include <webbind/FontMetrics.hpp>
#include <webbind/StylePropertyMapReadOnly.hpp>
#include <webbind/Location.hpp>
#include <webbind/HTMLElement.hpp>
#include <webbind/HTMLHeadElement.hpp>
#include <webbind/NodeList.hpp>
#include <webbind/HTMLAllCollection.hpp>
#include <webbind/PermissionsPolicy.hpp>
#include <webbind/FragmentDirective.hpp>
#include <webbind/Selection.hpp>
#include <webbind/DocumentTimeline.hpp>
#include <webbind/FontFaceSet.hpp>
#include <webbind/DOMQuad.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/DOMPoint.hpp>
#include <webbind/SVGGeometryElement.hpp>
#include <webbind/Animation.hpp>
#include <webbind/XPathExpression.hpp>
#include <webbind/XPathResult.hpp>


CaretPositionFromPointOptions::CaretPositionFromPointOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CaretPositionFromPointOptions CaretPositionFromPointOptions::take_ownership(Handle h) noexcept {
        return CaretPositionFromPointOptions(h);
    }
CaretPositionFromPointOptions::CaretPositionFromPointOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
CaretPositionFromPointOptions::CaretPositionFromPointOptions() noexcept: emlite::Val(emlite::Val::object()) {}
CaretPositionFromPointOptions CaretPositionFromPointOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<ShadowRoot> CaretPositionFromPointOptions::shadowRoots() const {
    return emlite::Val::get("shadowRoots").as<jsbind::TypedArray<ShadowRoot>>();
}

void CaretPositionFromPointOptions::shadowRoots(const jsbind::TypedArray<ShadowRoot>& value) {
    emlite::Val::set("shadowRoots", value);
}

BoxQuadOptions::BoxQuadOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BoxQuadOptions BoxQuadOptions::take_ownership(Handle h) noexcept {
        return BoxQuadOptions(h);
    }
BoxQuadOptions::BoxQuadOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
BoxQuadOptions::BoxQuadOptions() noexcept: emlite::Val(emlite::Val::object()) {}
BoxQuadOptions BoxQuadOptions::clone() const noexcept { return *this; }

CSSBoxType BoxQuadOptions::box() const {
    return emlite::Val::get("box").as<CSSBoxType>();
}

void BoxQuadOptions::box(const CSSBoxType& value) {
    emlite::Val::set("box", value);
}

jsbind::Any BoxQuadOptions::relativeTo() const {
    return emlite::Val::get("relativeTo").as<jsbind::Any>();
}

void BoxQuadOptions::relativeTo(const jsbind::Any& value) {
    emlite::Val::set("relativeTo", value);
}

DOMQuadInit::DOMQuadInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMQuadInit DOMQuadInit::take_ownership(Handle h) noexcept {
        return DOMQuadInit(h);
    }
DOMQuadInit::DOMQuadInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
DOMQuadInit::DOMQuadInit() noexcept: emlite::Val(emlite::Val::object()) {}
DOMQuadInit DOMQuadInit::clone() const noexcept { return *this; }

DOMPointInit DOMQuadInit::p1() const {
    return emlite::Val::get("p1").as<DOMPointInit>();
}

void DOMQuadInit::p1(const DOMPointInit& value) {
    emlite::Val::set("p1", value);
}

DOMPointInit DOMQuadInit::p2() const {
    return emlite::Val::get("p2").as<DOMPointInit>();
}

void DOMQuadInit::p2(const DOMPointInit& value) {
    emlite::Val::set("p2", value);
}

DOMPointInit DOMQuadInit::p3() const {
    return emlite::Val::get("p3").as<DOMPointInit>();
}

void DOMQuadInit::p3(const DOMPointInit& value) {
    emlite::Val::set("p3", value);
}

DOMPointInit DOMQuadInit::p4() const {
    return emlite::Val::get("p4").as<DOMPointInit>();
}

void DOMQuadInit::p4(const DOMPointInit& value) {
    emlite::Val::set("p4", value);
}

ConvertCoordinateOptions::ConvertCoordinateOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ConvertCoordinateOptions ConvertCoordinateOptions::take_ownership(Handle h) noexcept {
        return ConvertCoordinateOptions(h);
    }
ConvertCoordinateOptions::ConvertCoordinateOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ConvertCoordinateOptions::ConvertCoordinateOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ConvertCoordinateOptions ConvertCoordinateOptions::clone() const noexcept { return *this; }

CSSBoxType ConvertCoordinateOptions::fromBox() const {
    return emlite::Val::get("fromBox").as<CSSBoxType>();
}

void ConvertCoordinateOptions::fromBox(const CSSBoxType& value) {
    emlite::Val::set("fromBox", value);
}

CSSBoxType ConvertCoordinateOptions::toBox() const {
    return emlite::Val::get("toBox").as<CSSBoxType>();
}

void ConvertCoordinateOptions::toBox(const CSSBoxType& value) {
    emlite::Val::set("toBox", value);
}

Document Document::take_ownership(Handle h) noexcept {
        return Document(h);
    }
Document Document::clone() const noexcept { return *this; }
Document::Document(Handle h) noexcept : Node(emlite::Val::take_ownership(h)) {}
Document::Document(const emlite::Val &val) noexcept: Node(val) {}


Document::Document() : Node(emlite::Val::global("Document").new_()) {}

DOMImplementation Document::implementation() const {
    return Node::get("implementation").as<DOMImplementation>();
}

jsbind::String Document::URL() const {
    return Node::get("URL").as<jsbind::String>();
}

jsbind::String Document::documentURI() const {
    return Node::get("documentURI").as<jsbind::String>();
}

jsbind::String Document::compatMode() const {
    return Node::get("compatMode").as<jsbind::String>();
}

jsbind::String Document::characterSet() const {
    return Node::get("characterSet").as<jsbind::String>();
}

jsbind::String Document::charset() const {
    return Node::get("charset").as<jsbind::String>();
}

jsbind::String Document::inputEncoding() const {
    return Node::get("inputEncoding").as<jsbind::String>();
}

jsbind::String Document::contentType() const {
    return Node::get("contentType").as<jsbind::String>();
}

DocumentType Document::doctype() const {
    return Node::get("doctype").as<DocumentType>();
}

Element Document::documentElement() const {
    return Node::get("documentElement").as<Element>();
}

HTMLCollection Document::getElementsByTagName(const jsbind::String& qualifiedName) {
    return Node::call("getElementsByTagName", qualifiedName).as<HTMLCollection>();
}

HTMLCollection Document::getElementsByTagNameNS(const jsbind::String& namespace_, const jsbind::String& localName) {
    return Node::call("getElementsByTagNameNS", namespace_, localName).as<HTMLCollection>();
}

HTMLCollection Document::getElementsByClassName(const jsbind::String& classNames) {
    return Node::call("getElementsByClassName", classNames).as<HTMLCollection>();
}

Element Document::createElement(const jsbind::String& localName) {
    return Node::call("createElement", localName).as<Element>();
}

Element Document::createElement(const jsbind::String& localName, const jsbind::Any& options) {
    return Node::call("createElement", localName, options).as<Element>();
}

Element Document::createElementNS(const jsbind::String& namespace_, const jsbind::String& qualifiedName) {
    return Node::call("createElementNS", namespace_, qualifiedName).as<Element>();
}

Element Document::createElementNS(const jsbind::String& namespace_, const jsbind::String& qualifiedName, const jsbind::Any& options) {
    return Node::call("createElementNS", namespace_, qualifiedName, options).as<Element>();
}

DocumentFragment Document::createDocumentFragment() {
    return Node::call("createDocumentFragment").as<DocumentFragment>();
}

Text Document::createTextNode(const jsbind::String& data) {
    return Node::call("createTextNode", data).as<Text>();
}

CDATASection Document::createCDATASection(const jsbind::String& data) {
    return Node::call("createCDATASection", data).as<CDATASection>();
}

Comment Document::createComment(const jsbind::String& data) {
    return Node::call("createComment", data).as<Comment>();
}

ProcessingInstruction Document::createProcessingInstruction(const jsbind::String& target, const jsbind::String& data) {
    return Node::call("createProcessingInstruction", target, data).as<ProcessingInstruction>();
}

Node Document::importNode(const Node& node) {
    return Node::call("importNode", node).as<Node>();
}

Node Document::importNode(const Node& node, const jsbind::Any& options) {
    return Node::call("importNode", node, options).as<Node>();
}

Node Document::adoptNode(const Node& node) {
    return Node::call("adoptNode", node).as<Node>();
}

Attr Document::createAttribute(const jsbind::String& localName) {
    return Node::call("createAttribute", localName).as<Attr>();
}

Attr Document::createAttributeNS(const jsbind::String& namespace_, const jsbind::String& qualifiedName) {
    return Node::call("createAttributeNS", namespace_, qualifiedName).as<Attr>();
}

Event Document::createEvent(const jsbind::String& interface) {
    return Node::call("createEvent", interface).as<Event>();
}

Range Document::createRange() {
    return Node::call("createRange").as<Range>();
}

NodeIterator Document::createNodeIterator(const Node& root) {
    return Node::call("createNodeIterator", root).as<NodeIterator>();
}

NodeIterator Document::createNodeIterator(const Node& root, unsigned long whatToShow) {
    return Node::call("createNodeIterator", root, whatToShow).as<NodeIterator>();
}

NodeIterator Document::createNodeIterator(const Node& root, unsigned long whatToShow, const jsbind::Function& filter) {
    return Node::call("createNodeIterator", root, whatToShow, filter).as<NodeIterator>();
}

TreeWalker Document::createTreeWalker(const Node& root) {
    return Node::call("createTreeWalker", root).as<TreeWalker>();
}

TreeWalker Document::createTreeWalker(const Node& root, unsigned long whatToShow) {
    return Node::call("createTreeWalker", root, whatToShow).as<TreeWalker>();
}

TreeWalker Document::createTreeWalker(const Node& root, unsigned long whatToShow, const jsbind::Function& filter) {
    return Node::call("createTreeWalker", root, whatToShow, filter).as<TreeWalker>();
}

SVGSVGElement Document::rootElement() const {
    return Node::get("rootElement").as<SVGSVGElement>();
}

NamedFlowMap Document::namedFlows() const {
    return Node::get("namedFlows").as<NamedFlowMap>();
}

ViewTransition Document::startViewTransition() {
    return Node::call("startViewTransition").as<ViewTransition>();
}

ViewTransition Document::startViewTransition(const jsbind::Any& callbackOptions) {
    return Node::call("startViewTransition", callbackOptions).as<ViewTransition>();
}

Element Document::elementFromPoint(double x, double y) {
    return Node::call("elementFromPoint", x, y).as<Element>();
}

jsbind::TypedArray<Element> Document::elementsFromPoint(double x, double y) {
    return Node::call("elementsFromPoint", x, y).as<jsbind::TypedArray<Element>>();
}

CaretPosition Document::caretPositionFromPoint(double x, double y) {
    return Node::call("caretPositionFromPoint", x, y).as<CaretPosition>();
}

CaretPosition Document::caretPositionFromPoint(double x, double y, const CaretPositionFromPointOptions& options) {
    return Node::call("caretPositionFromPoint", x, y, options).as<CaretPosition>();
}

Element Document::scrollingElement() const {
    return Node::get("scrollingElement").as<Element>();
}

FontMetrics Document::measureElement(const Element& element) {
    return Node::call("measureElement", element).as<FontMetrics>();
}

FontMetrics Document::measureText(const jsbind::String& text, const StylePropertyMapReadOnly& styleMap) {
    return Node::call("measureText", text, styleMap).as<FontMetrics>();
}

bool Document::fullscreenEnabled() const {
    return Node::get("fullscreenEnabled").as<bool>();
}

bool Document::fullscreen() const {
    return Node::get("fullscreen").as<bool>();
}

jsbind::Promise<jsbind::Undefined> Document::exitFullscreen() {
    return Node::call("exitFullscreen").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Any Document::onfullscreenchange() const {
    return Node::get("onfullscreenchange").as<jsbind::Any>();
}

void Document::onfullscreenchange(const jsbind::Any& value) {
    Node::set("onfullscreenchange", value);
}

jsbind::Any Document::onfullscreenerror() const {
    return Node::get("onfullscreenerror").as<jsbind::Any>();
}

void Document::onfullscreenerror(const jsbind::Any& value) {
    Node::set("onfullscreenerror", value);
}

Document Document::parseHTMLUnsafe(const jsbind::Any& html) {
    return emlite::Val::global("document").call("parseHTMLUnsafe", html).as<Document>();
}

jsbind::Any Document::location() const {
    return Node::get("location").as<jsbind::Any>();
}

jsbind::String Document::domain() const {
    return Node::get("domain").as<jsbind::String>();
}

void Document::domain(const jsbind::String& value) {
    Node::set("domain", value);
}

jsbind::String Document::referrer() const {
    return Node::get("referrer").as<jsbind::String>();
}

jsbind::String Document::cookie() const {
    return Node::get("cookie").as<jsbind::String>();
}

void Document::cookie(const jsbind::String& value) {
    Node::set("cookie", value);
}

jsbind::String Document::lastModified() const {
    return Node::get("lastModified").as<jsbind::String>();
}

DocumentReadyState Document::readyState() const {
    return Node::get("readyState").as<DocumentReadyState>();
}

jsbind::String Document::title() const {
    return Node::get("title").as<jsbind::String>();
}

void Document::title(const jsbind::String& value) {
    Node::set("title", value);
}

jsbind::String Document::dir() const {
    return Node::get("dir").as<jsbind::String>();
}

void Document::dir(const jsbind::String& value) {
    Node::set("dir", value);
}

HTMLElement Document::body() const {
    return Node::get("body").as<HTMLElement>();
}

void Document::body(const HTMLElement& value) {
    Node::set("body", value);
}

HTMLHeadElement Document::head() const {
    return Node::get("head").as<HTMLHeadElement>();
}

HTMLCollection Document::images() const {
    return Node::get("images").as<HTMLCollection>();
}

HTMLCollection Document::embeds() const {
    return Node::get("embeds").as<HTMLCollection>();
}

HTMLCollection Document::plugins() const {
    return Node::get("plugins").as<HTMLCollection>();
}

HTMLCollection Document::links() const {
    return Node::get("links").as<HTMLCollection>();
}

HTMLCollection Document::forms() const {
    return Node::get("forms").as<HTMLCollection>();
}

HTMLCollection Document::scripts() const {
    return Node::get("scripts").as<HTMLCollection>();
}

NodeList Document::getElementsByName(const jsbind::String& elementName) {
    return Node::call("getElementsByName", elementName).as<NodeList>();
}

jsbind::Any Document::currentScript() const {
    return Node::get("currentScript").as<jsbind::Any>();
}

jsbind::Any Document::open(const jsbind::String& url, const jsbind::String& name, const jsbind::String& features) {
    return Node::call("open", url, name, features).as<jsbind::Any>();
}

jsbind::Undefined Document::close() {
    return Node::call("close").as<jsbind::Undefined>();
}

jsbind::Undefined Document::write(const jsbind::Any& text) {
    return Node::call("write", text).as<jsbind::Undefined>();
}

jsbind::Undefined Document::writeln(const jsbind::Any& text) {
    return Node::call("writeln", text).as<jsbind::Undefined>();
}

jsbind::Any Document::defaultView() const {
    return Node::get("defaultView").as<jsbind::Any>();
}

bool Document::hasFocus() {
    return Node::call("hasFocus").as<bool>();
}

jsbind::String Document::designMode() const {
    return Node::get("designMode").as<jsbind::String>();
}

void Document::designMode(const jsbind::String& value) {
    Node::set("designMode", value);
}

bool Document::execCommand(const jsbind::String& commandId) {
    return Node::call("execCommand", commandId).as<bool>();
}

bool Document::execCommand(const jsbind::String& commandId, bool showUI) {
    return Node::call("execCommand", commandId, showUI).as<bool>();
}

bool Document::execCommand(const jsbind::String& commandId, bool showUI, const jsbind::String& value) {
    return Node::call("execCommand", commandId, showUI, value).as<bool>();
}

bool Document::queryCommandEnabled(const jsbind::String& commandId) {
    return Node::call("queryCommandEnabled", commandId).as<bool>();
}

bool Document::queryCommandIndeterm(const jsbind::String& commandId) {
    return Node::call("queryCommandIndeterm", commandId).as<bool>();
}

bool Document::queryCommandState(const jsbind::String& commandId) {
    return Node::call("queryCommandState", commandId).as<bool>();
}

bool Document::queryCommandSupported(const jsbind::String& commandId) {
    return Node::call("queryCommandSupported", commandId).as<bool>();
}

jsbind::String Document::queryCommandValue(const jsbind::String& commandId) {
    return Node::call("queryCommandValue", commandId).as<jsbind::String>();
}

bool Document::hidden() const {
    return Node::get("hidden").as<bool>();
}

DocumentVisibilityState Document::visibilityState() const {
    return Node::get("visibilityState").as<DocumentVisibilityState>();
}

jsbind::Any Document::onreadystatechange() const {
    return Node::get("onreadystatechange").as<jsbind::Any>();
}

void Document::onreadystatechange(const jsbind::Any& value) {
    Node::set("onreadystatechange", value);
}

jsbind::Any Document::onvisibilitychange() const {
    return Node::get("onvisibilitychange").as<jsbind::Any>();
}

void Document::onvisibilitychange(const jsbind::Any& value) {
    Node::set("onvisibilitychange", value);
}

jsbind::String Document::fgColor() const {
    return Node::get("fgColor").as<jsbind::String>();
}

void Document::fgColor(const jsbind::String& value) {
    Node::set("fgColor", value);
}

jsbind::String Document::linkColor() const {
    return Node::get("linkColor").as<jsbind::String>();
}

void Document::linkColor(const jsbind::String& value) {
    Node::set("linkColor", value);
}

jsbind::String Document::vlinkColor() const {
    return Node::get("vlinkColor").as<jsbind::String>();
}

void Document::vlinkColor(const jsbind::String& value) {
    Node::set("vlinkColor", value);
}

jsbind::String Document::alinkColor() const {
    return Node::get("alinkColor").as<jsbind::String>();
}

void Document::alinkColor(const jsbind::String& value) {
    Node::set("alinkColor", value);
}

jsbind::String Document::bgColor() const {
    return Node::get("bgColor").as<jsbind::String>();
}

void Document::bgColor(const jsbind::String& value) {
    Node::set("bgColor", value);
}

HTMLCollection Document::anchors() const {
    return Node::get("anchors").as<HTMLCollection>();
}

HTMLCollection Document::applets() const {
    return Node::get("applets").as<HTMLCollection>();
}

jsbind::Undefined Document::clear() {
    return Node::call("clear").as<jsbind::Undefined>();
}

jsbind::Undefined Document::captureEvents() {
    return Node::call("captureEvents").as<jsbind::Undefined>();
}

jsbind::Undefined Document::releaseEvents() {
    return Node::call("releaseEvents").as<jsbind::Undefined>();
}

HTMLAllCollection Document::all() const {
    return Node::get("all").as<HTMLAllCollection>();
}

jsbind::Any Document::onfreeze() const {
    return Node::get("onfreeze").as<jsbind::Any>();
}

void Document::onfreeze(const jsbind::Any& value) {
    Node::set("onfreeze", value);
}

jsbind::Any Document::onresume() const {
    return Node::get("onresume").as<jsbind::Any>();
}

void Document::onresume(const jsbind::Any& value) {
    Node::set("onresume", value);
}

bool Document::wasDiscarded() const {
    return Node::get("wasDiscarded").as<bool>();
}

PermissionsPolicy Document::permissionsPolicy() const {
    return Node::get("permissionsPolicy").as<PermissionsPolicy>();
}

bool Document::pictureInPictureEnabled() const {
    return Node::get("pictureInPictureEnabled").as<bool>();
}

jsbind::Promise<jsbind::Undefined> Document::exitPictureInPicture() {
    return Node::call("exitPictureInPicture").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Any Document::onpointerlockchange() const {
    return Node::get("onpointerlockchange").as<jsbind::Any>();
}

void Document::onpointerlockchange(const jsbind::Any& value) {
    Node::set("onpointerlockchange", value);
}

jsbind::Any Document::onpointerlockerror() const {
    return Node::get("onpointerlockerror").as<jsbind::Any>();
}

void Document::onpointerlockerror(const jsbind::Any& value) {
    Node::set("onpointerlockerror", value);
}

jsbind::Undefined Document::exitPointerLock() {
    return Node::call("exitPointerLock").as<jsbind::Undefined>();
}

bool Document::prerendering() const {
    return Node::get("prerendering").as<bool>();
}

jsbind::Any Document::onprerenderingchange() const {
    return Node::get("onprerenderingchange").as<jsbind::Any>();
}

void Document::onprerenderingchange(const jsbind::Any& value) {
    Node::set("onprerenderingchange", value);
}

jsbind::Promise<jsbind::Undefined> Document::requestStorageAccessFor(const jsbind::String& requestedOrigin) {
    return Node::call("requestStorageAccessFor", requestedOrigin).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<bool> Document::hasUnpartitionedCookieAccess() {
    return Node::call("hasUnpartitionedCookieAccess").as<jsbind::Promise<bool>>();
}

FragmentDirective Document::fragmentDirective() const {
    return Node::get("fragmentDirective").as<FragmentDirective>();
}

Selection Document::getSelection() {
    return Node::call("getSelection").as<Selection>();
}

jsbind::Promise<bool> Document::hasStorageAccess() {
    return Node::call("hasStorageAccess").as<jsbind::Promise<bool>>();
}

jsbind::Promise<jsbind::Undefined> Document::requestStorageAccess() {
    return Node::call("requestStorageAccess").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<bool> Document::hasPrivateToken(const jsbind::String& issuer) {
    return Node::call("hasPrivateToken", issuer).as<jsbind::Promise<bool>>();
}

jsbind::Promise<bool> Document::hasRedemptionRecord(const jsbind::String& issuer) {
    return Node::call("hasRedemptionRecord", issuer).as<jsbind::Promise<bool>>();
}

DocumentTimeline Document::timeline() const {
    return Node::get("timeline").as<DocumentTimeline>();
}

FontFaceSet Document::fonts() const {
    return Node::get("fonts").as<FontFaceSet>();
}

jsbind::TypedArray<DOMQuad> Document::getBoxQuads() {
    return Node::call("getBoxQuads").as<jsbind::TypedArray<DOMQuad>>();
}

jsbind::TypedArray<DOMQuad> Document::getBoxQuads(const BoxQuadOptions& options) {
    return Node::call("getBoxQuads", options).as<jsbind::TypedArray<DOMQuad>>();
}

DOMQuad Document::convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from) {
    return Node::call("convertQuadFromNode", quad, from).as<DOMQuad>();
}

DOMQuad Document::convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return Node::call("convertQuadFromNode", quad, from, options).as<DOMQuad>();
}

DOMQuad Document::convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from) {
    return Node::call("convertRectFromNode", rect, from).as<DOMQuad>();
}

DOMQuad Document::convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return Node::call("convertRectFromNode", rect, from, options).as<DOMQuad>();
}

DOMPoint Document::convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from) {
    return Node::call("convertPointFromNode", point, from).as<DOMPoint>();
}

DOMPoint Document::convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return Node::call("convertPointFromNode", point, from, options).as<DOMPoint>();
}

Element Document::getElementById(const jsbind::String& elementId) {
    return Node::call("getElementById", elementId).as<Element>();
}

jsbind::TypedArray<Animation> Document::getAnimations() {
    return Node::call("getAnimations").as<jsbind::TypedArray<Animation>>();
}

HTMLCollection Document::children() const {
    return Node::get("children").as<HTMLCollection>();
}

Element Document::firstElementChild() const {
    return Node::get("firstElementChild").as<Element>();
}

Element Document::lastElementChild() const {
    return Node::get("lastElementChild").as<Element>();
}

unsigned long Document::childElementCount() const {
    return Node::get("childElementCount").as<unsigned long>();
}

jsbind::Undefined Document::prepend(const jsbind::Any& nodes) {
    return Node::call("prepend", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined Document::append(const jsbind::Any& nodes) {
    return Node::call("append", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined Document::replaceChildren(const jsbind::Any& nodes) {
    return Node::call("replaceChildren", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined Document::moveBefore(const Node& node, const Node& child) {
    return Node::call("moveBefore", node, child).as<jsbind::Undefined>();
}

Element Document::querySelector(const jsbind::String& selectors) {
    return Node::call("querySelector", selectors).as<Element>();
}

NodeList Document::querySelectorAll(const jsbind::String& selectors) {
    return Node::call("querySelectorAll", selectors).as<NodeList>();
}

XPathExpression Document::createExpression(const jsbind::String& expression) {
    return Node::call("createExpression", expression).as<XPathExpression>();
}

XPathExpression Document::createExpression(const jsbind::String& expression, const jsbind::Function& resolver) {
    return Node::call("createExpression", expression, resolver).as<XPathExpression>();
}

Node Document::createNSResolver(const Node& nodeResolver) {
    return Node::call("createNSResolver", nodeResolver).as<Node>();
}

XPathResult Document::evaluate(const jsbind::String& expression, const Node& contextNode) {
    return Node::call("evaluate", expression, contextNode).as<XPathResult>();
}

XPathResult Document::evaluate(const jsbind::String& expression, const Node& contextNode, const jsbind::Function& resolver) {
    return Node::call("evaluate", expression, contextNode, resolver).as<XPathResult>();
}

XPathResult Document::evaluate(const jsbind::String& expression, const Node& contextNode, const jsbind::Function& resolver, unsigned short type) {
    return Node::call("evaluate", expression, contextNode, resolver, type).as<XPathResult>();
}

XPathResult Document::evaluate(const jsbind::String& expression, const Node& contextNode, const jsbind::Function& resolver, unsigned short type, const XPathResult& result) {
    return Node::call("evaluate", expression, contextNode, resolver, type, result).as<XPathResult>();
}

jsbind::Any Document::onbeforexrselect() const {
    return Node::get("onbeforexrselect").as<jsbind::Any>();
}

void Document::onbeforexrselect(const jsbind::Any& value) {
    Node::set("onbeforexrselect", value);
}

