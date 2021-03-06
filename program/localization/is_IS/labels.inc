<?php

/*
 +-----------------------------------------------------------------------+
 | localization/<lang>/labels.inc                                        |
 |                                                                       |
 | Localization file of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/labels/
*/

$labels = array();

// login page
$labels['welcome']   = 'Velkomin í $product';
$labels['username']  = 'Netfang';
$labels['password']  = 'Lykilorð';
$labels['server']    = 'Póstþjónn';
$labels['login']     = 'Innskrá';

// taskbar
$labels['logout']   = 'Útskrá';
$labels['mail']     = 'Tölvupóstur';
$labels['settings'] = 'Stillingar';
$labels['addressbook'] = 'Nafnaskrá';

// mailbox names
$labels['inbox']  = 'Innhólf';
$labels['drafts'] = 'Drög';
$labels['sent']   = 'Sent';
$labels['trash']  = 'Rusl';
$labels['junk']   = 'Ruslpóstur';
$labels['show_real_foldernames'] = 'Show real names for special folders';

// message listing
$labels['subject'] = 'Titill';
$labels['from']    = 'Frá';
$labels['sender']  = 'Sender';
$labels['to']      = 'Til';
$labels['cc']      = 'Afrit';
$labels['bcc']     = 'Blint afrit';
$labels['replyto'] = 'Svar til';
$labels['followupto'] = 'Svar við';
$labels['date']    = 'Dagsetning';
$labels['size']    = 'Stærð';
$labels['priority'] = 'Forgangur';
$labels['organization'] = 'Stofnun';
$labels['readstatus'] = 'Lesmerking';
$labels['listoptions'] = 'List options...';

$labels['mailboxlist'] = 'Möppur';
$labels['messagesfromto'] = 'Skeyti $from til $to af $count';
$labels['threadsfromto'] = 'Þræðir $from til $to af $count';
$labels['messagenrof'] = 'Skeyti $nr af $count';
$labels['fromtoshort'] = '$from - $to af $count';

$labels['copy']     = 'Afrit';
$labels['move']     = 'Færa';
$labels['moveto']   = 'Færa í...';
$labels['download'] = 'Hlaða niður';
$labels['open']     = 'Open';
$labels['showattachment'] = 'Show';
$labels['showanyway'] = 'Show it anyway';

$labels['filename'] = 'Skráarheiti';
$labels['filesize'] = 'Skráarstærð';

$labels['addtoaddressbook'] = 'Bæta í nafnaskrá';

// weekdays short
$labels['sun'] = 'sunn.';
$labels['mon'] = 'mán.';
$labels['tue'] = 'þrið.';
$labels['wed'] = 'miðv.';
$labels['thu'] = 'fimm.';
$labels['fri'] = 'föst.';
$labels['sat'] = 'laug.';

// weekdays long
$labels['sunday']    = 'sunnudagur';
$labels['monday']    = 'mánudagur';
$labels['tuesday']   = 'þriðjudagur';
$labels['wednesday'] = 'miðvikudagur';
$labels['thursday']  = 'fimmtudagur';
$labels['friday']    = 'föstudagur';
$labels['saturday']  = 'laugardagur';

// months short
$labels['jan']	= 'jan';
$labels['feb']	= 'feb';
$labels['mar']	= 'mar';
$labels['apr']	= 'apr';
$labels['may']	= 'maí';
$labels['jun']	= 'jún';
$labels['jul'] 	= 'júl';
$labels['aug']	= 'ágú';
$labels['sep']	= 'sep';
$labels['oct']	= 'okt';
$labels['nov']	= 'nóv';
$labels['dec']	= 'des';

// months long
$labels['longjan']	= 'janúar';
$labels['longfeb']	= 'febrúar';
$labels['longmar']	= 'mars';
$labels['longapr']	= 'apríl';
$labels['longmay']	= 'maí';
$labels['longjun']	= 'júní';
$labels['longjul']	= 'júlí';
$labels['longaug']	= 'ágúst';
$labels['longsep']	= 'september';
$labels['longoct']	= 'október';
$labels['longnov']	= 'nóvember';
$labels['longdec']	= 'desember';

$labels['today'] = 'Í dag';

// toolbar buttons
$labels['refresh']          = 'Endurhlaða';
$labels['checkmail']        = 'Gá að nýjum skeytum';
$labels['compose']          = 'Semja skeyti';
$labels['writenewmessage']  = 'Búa til nýtt skeyti';
$labels['reply']            = 'Svara';
$labels['replytomessage']   = 'Svara skeyti';
$labels['replytoallmessage'] = 'Svar til lista eða sendanda og allra viðtakenda';
$labels['replyall']         = 'Svara öllum';
$labels['replylist']        = 'Svar til lista';
$labels['forward']          = 'Áframsenda';
$labels['forwardinline']    = 'Áframsenda innan skeytis';
$labels['forwardattachment'] = 'Áframsenda sem viðhengi';
$labels['forwardmessage']   = 'Áframsenda skeyti';
$labels['deletemessage']    = 'Eyða skeyti';
$labels['movemessagetotrash'] = 'Færa skeyti í ruslið';
$labels['printmessage']     = 'Prenta skeyti';
$labels['previousmessage']  = 'Sýna fyrra skeyti';
$labels['firstmessage']     = 'Sýna fyrsta skeyti';
$labels['nextmessage']      = 'Sýna næsta skeyti';
$labels['lastmessage']      = 'Sýna síðasta skeyti';
$labels['backtolist']       = 'Til baka í skeytalista';
$labels['viewsource']       = 'Skoða kóða';
$labels['mark']             = 'Merki';
$labels['markmessages']     = 'Merkja skeyti';
$labels['markread']         = 'Sem lesin';
$labels['markunread']       = 'Sem ólesin';
$labels['markflagged']      = 'Sem flögguð';
$labels['markunflagged']    = 'Sem óflögguð';
$labels['moreactions']      = 'Fleiri aðgerðir...';
$labels['more']             = 'Meira';
$labels['back']             = 'Til baka';
$labels['options']          = 'Valkostir';

$labels['select'] = 'Velja';
$labels['all'] = 'Allt';
$labels['none'] = 'Ekkert';
$labels['currpage'] = 'Núverandi síða';
$labels['unread'] = 'Ólesið';
$labels['flagged'] = 'Flaggað';
$labels['unanswered'] = 'Ósvarað';
$labels['withattachment'] = 'With attachment';
$labels['deleted'] = 'Eytt';
$labels['undeleted'] = 'Not deleted';
$labels['invert'] = 'Umhverfa';
$labels['filter'] = 'Sía';
$labels['list'] = 'Listi';
$labels['threads'] = 'Þræðir';
$labels['expand-all'] = 'Þenja allt út';
$labels['expand-unread'] = 'Þenja ólesið';
$labels['collapse-all'] = 'Fella allt saman';
$labels['threaded'] = 'Þrætt';

$labels['autoexpand_threads'] = 'Þenja skeytaþræði út';
$labels['do_expand'] = 'allir þræðir';
$labels['expand_only_unread'] = 'aðeins ólesin skeyti';
$labels['fromto'] = 'Frá/Til';
$labels['flag'] = 'Flagg';
$labels['attachment'] = 'Viðhengi';
$labels['nonesort'] = 'Ekkert';
$labels['sentdate'] = 'Sendingardagur';
$labels['arrival'] = 'Komudagur';
$labels['asc'] = 'hækkandi';
$labels['desc'] = 'lækkandi';
$labels['listcolumns'] = 'Listadálkar';
$labels['listsorting'] = 'Röðunardálkur';
$labels['listorder'] = 'Röðun';
$labels['listmode'] = 'Listayfirlit';

$labels['folderactions'] = 'Möppuaðgerðir...';
$labels['compact'] = 'Pakka';
$labels['empty'] = 'Tæma';
$labels['importmessages'] = 'Import messages';

$labels['quota'] = 'Gagnamagn';
$labels['unknown']  = 'óþekkt';
$labels['unlimited']  = 'ótakmarkað';

$labels['quicksearch']  = 'Flýtileit';
$labels['resetsearch']  = 'Tæma leit';
$labels['searchmod']  = 'Leitarskilyrði';
$labels['msgtext']  = 'Allt skeytið';
$labels['body']  = 'Body';
$labels['type'] = 'Type';

$labels['openinextwin'] = 'Opna í nýjum glugga';
$labels['emlsave'] = 'Niðurhlaða (.eml)';
$labels['changeformattext'] = 'Display in plain text format';
$labels['changeformathtml'] = 'Display in HTML format';

// message compose
$labels['editasnew']      = 'Breyta sem nýju';
$labels['send']           = 'Send';
$labels['sendmessage']    = 'Senda skeytið núna';
$labels['savemessage']    = 'Vista drög';
$labels['addattachment']  = 'Hengja við';
$labels['charset']        = 'Stafasett';
$labels['editortype']     = 'Gerð ritils';
$labels['returnreceipt']  = 'Kvittun við lestur';
$labels['dsn']            = 'Afhendingarstaða';
$labels['mailreplyintro'] = 'Þann $date, $sender reit:';
$labels['originalmessage'] = 'Upprunalegt skeyti';

$labels['editidents']    = 'Breyta sjálfum';
$labels['spellcheck']    = 'Stafsetning';
$labels['checkspelling'] = 'Athuga stafsetningu';
$labels['resumeediting'] = 'Aftur í ritham';
$labels['revertto']      = 'Hverfa til';

$labels['attach'] = 'Viðhengi';
$labels['attachments'] = 'Viðhengi';
$labels['upload'] = 'Hlaða upp';
$labels['uploadprogress'] = '$percent ($current af $total)';
$labels['close']  = 'Loka';
$labels['messageoptions']  = 'Skeytisvalmöguleikar...';

$labels['low']     = 'Lágt';
$labels['lowest']  = 'Lægst';
$labels['normal']  = 'Venjulegt';
$labels['high']    = 'Hátt';
$labels['highest'] = 'Hæst';

$labels['nosubject']  = '(án titils)';
$labels['showimages'] = 'Sýna myndir';
$labels['alwaysshow'] = 'Sýna alltaf myndir frá $sender';
$labels['isdraft']    = 'Þetta eru drög að skeyti';
$labels['andnmore']   = '$nr more...';
$labels['togglemoreheaders'] = 'Show more message headers';
$labels['togglefullheaders'] = 'Toggle raw message headers';

$labels['htmltoggle'] = 'HTML';
$labels['plaintoggle'] = 'Venjulegur texti';
$labels['savesentmessagein'] = 'Vista send skeyti í';
$labels['dontsave'] = 'ekki vista';
$labels['maxuploadsize'] = 'Leyfileg hámarksstærð skjals er $size';

$labels['addcc'] = 'Bæta við Cc';
$labels['addbcc'] = 'Bæta við Bcc';
$labels['addreplyto'] = 'Bæta við Reply-To';
$labels['addfollowupto'] = 'Nýtt svar við';

// mdn
$labels['mdnrequest'] = 'Sendandi þessa skeytið hefur óskað þess að þú látir vita að þú hafir lesið þetta skeyti. Viltu láta hann vita?';
$labels['receiptread'] = 'Kvittun (lesa)';
$labels['yourmessage'] = 'Þetta er kvittun fyrir skeytið';
$labels['receiptnote'] = 'ATH: Þessi kvittun segir aðeins til um að skeytið kom upp á skjánum á viðtakanda. Það er engin sönnun um að hann hafi lesið eða skilið innihaldið.';

// address boook
$labels['name']         = 'Skjánafn';
$labels['firstname']    = 'Eiginnafn';
$labels['surname']      = 'Eftirnafn';
$labels['middlename']   = 'Millinafn';
$labels['nameprefix']   = 'Forskeyti';
$labels['namesuffix']   = 'Viðskeyti';
$labels['nickname']     = 'Stuttnefni';
$labels['jobtitle']     = 'Starfstitill';
$labels['department']   = 'Deild';
$labels['gender']       = 'Kyn';
$labels['maidenname']   = 'Ættarnafn móður';
$labels['email']        = 'Netfang';
$labels['phone']        = 'Sími';
$labels['address']      = 'Heimilisfang';
$labels['street']       = 'Götuheiti';
$labels['locality']     = 'Staður';
$labels['zipcode']      = 'Póstnúmer';
$labels['region']       = 'Ríki/Fylki';
$labels['country']      = 'Land';
$labels['birthday']     = 'Afmælisdagur';
$labels['anniversary']  = 'Afmæli';
$labels['website']      = 'Vefur';
$labels['instantmessenger'] = 'Spjall';
$labels['notes'] = 'Glósur';
$labels['male']   = 'karlkyns';
$labels['female'] = 'kvenkyns';
$labels['manager'] = 'Stjórnandi';
$labels['assistant'] = 'Aðstoðarmaður';
$labels['spouse'] = 'Maki';
$labels['allfields'] = 'Öll svæði';
$labels['search'] = 'Leit';
$labels['advsearch'] = 'Ítarleg leit';
$labels['advanced'] = 'Flóknari stillingar';
$labels['other'] = 'Annað';

$labels['typehome']   = 'Heimamappa';
$labels['typework']   = 'Vinnusími';
$labels['typeother']  = 'Annað';
$labels['typemobile']  = 'Farsími';
$labels['typemain']  = 'Aðalstillingar';
$labels['typehomefax']  = 'Heimafax';
$labels['typeworkfax']  = 'Vinnufax';
$labels['typecar']  = 'Bíll';
$labels['typepager']  = 'Friðþjófur';
$labels['typevideo']  = 'Myndband';
$labels['typeassistant']  = 'Aðstoðarmaður';
$labels['typehomepage']  = 'Vefur';
$labels['typeblog'] = 'Blogg';
$labels['typeprofile'] = 'Mannlýsing';

$labels['addfield'] = 'Bæta við svæði...';
$labels['addcontact'] = 'Nýr tengiliður';
$labels['editcontact'] = 'Lagfæra';
$labels['contacts'] = 'Tengiliðir';
$labels['contactproperties'] = 'Eiginleikar';
$labels['personalinfo'] = 'Persónulegar upplýsingar';

$labels['edit']   = 'Breyta';
$labels['cancel'] = 'Hætta við';
$labels['save']   = 'Vista';
$labels['delete'] = 'Eyða';
$labels['rename'] = 'Endurnefna';
$labels['addphoto'] = 'Bæta við';
$labels['replacephoto'] = 'Skipta út';
$labels['uploadphoto'] = 'Upload photo';

$labels['newcontact']     = 'Búa til nýtt nafnspjald';
$labels['deletecontact']  = 'Eyða völdum tengiliðum';
$labels['composeto']      = 'Skrifa skeyti til';
$labels['contactsfromto'] = 'Netföng $from til $to af $count';
$labels['print']          = 'Prenta';
$labels['export']         = 'Flytja út';
$labels['exportall']      = 'Export all';
$labels['exportsel']      = 'Export selected';
$labels['exportvcards']   = 'Flytja út nafnspjöld á vCard formi';
$labels['newcontactgroup'] = 'Nýr tengiliðahópur';
$labels['grouprename']    = 'Breyta nafni hóps';
$labels['groupdelete']    = 'Fjarlægja hóp';
$labels['groupremoveselected'] = 'Remove selected contacts from group';

$labels['previouspage']   = 'Sýna fyrri síðu';
$labels['firstpage']      = 'Sýna fyrstu síðu';
$labels['nextpage']       = 'Sýna næstu síðu';
$labels['lastpage']       = 'Sýna síðustu síðu';

$labels['group'] = 'Hópur';
$labels['groups'] = 'Hópar';
$labels['listgroup'] = 'List group members';
$labels['personaladrbook'] = 'Persónuleg heimilisföng';

$labels['searchsave'] = 'Vista leit';
$labels['searchdelete'] = 'Eyða leit';

$labels['import'] = 'Flytja inn';
$labels['importcontacts'] = 'Flytja inn nafnspjöld';
$labels['importfromfile'] = 'Flytja inn af skrá';
$labels['importtarget'] = 'Bæta nýjum tengiliðum við:';
$labels['importreplace'] = 'Skipta út allri netfangaskránni';
$labels['importdesc'] = 'You can upload contacts from an existing address book.<br/>We currently support importing addresses from the <a href="http://en.wikipedia.org/wiki/VCard">vCard</a> or CSV (comma-separated) data format.';
$labels['done'] = 'Búið';

// settings
$labels['settingsfor'] = 'Stillingar fyrir';
$labels['about'] = 'Um forritið';
$labels['preferences'] = 'Stillingar';
$labels['userpreferences'] = 'Notendastillingar';
$labels['editpreferences'] = 'Breyta notendastillingum';

$labels['identities'] = 'Auðkenni';
$labels['manageidentities'] = 'Stjórna auðkennum þessa reiknings';
$labels['newidentity'] = 'Nýtt auðkenni';

$labels['newitem'] = 'Nýtt';
$labels['edititem'] = 'Breyta';

$labels['preferhtml'] = 'Vil HTML';
$labels['defaultcharset'] = 'Venjulegt stafasett';
$labels['htmlmessage'] = 'HTML skeyti';
$labels['messagepart'] = 'Part';
$labels['digitalsig'] = 'Digital Signature';
$labels['dateformat'] = 'Snið dagsetningar';
$labels['timeformat'] = 'Tímasnið';
$labels['prettydate'] = 'Fallegar dagsetningar';
$labels['setdefault']  = 'Gera sjálfgilt';
$labels['autodetect']  = 'Sjálfvirkt';
$labels['language']  = 'Tungumál';
$labels['timezone']  = 'Tímabelti';
$labels['pagesize']  = 'Línur á síðu';
$labels['signature'] = 'Undirskrift';
$labels['dstactive']  = 'Sumar-/vetratími';
$labels['showinextwin'] = 'Open message in a new window';
$labels['composeextwin'] = 'Compose in a new window';
$labels['htmleditor'] = 'Skrifa HTML-skeyti';
$labels['htmlonreply'] = 'sem svar við HTML-skeytum aðeins';
$labels['htmlonreplyandforward'] = 'on forward or reply to HTML message';
$labels['htmlsignature'] = 'HTML-undirskrift';
$labels['showemail'] = 'Show email address with display name';
$labels['previewpane'] = 'Sýna forskoðunarglugga';
$labels['skin'] = 'Sniðmát á viðmóti';
$labels['logoutclear'] = 'Tæma rusl við útskráningu';
$labels['logoutcompact'] = 'Þjappa innhólf við útskráningu';
$labels['uisettings'] = 'Notandaviðmót';
$labels['serversettings'] = 'Stillingar þjóns';
$labels['mailboxview'] = 'Útlit pósthólfs';
$labels['mdnrequests'] = 'Við beiðni um kvittun skeytis';
$labels['askuser'] = 'spyrja notanda';
$labels['autosend'] = 'senda kvittun';
$labels['autosendknown'] = 'senda kvittun til tengiliða minna, spyrja mig ella';
$labels['autosendknownignore'] = 'senda kvittun til tengiliða minna, hunsa ella';
$labels['ignore'] = 'hunsa';
$labels['readwhendeleted'] = 'Merkja skeyti sem lesið þegar því er hent';
$labels['flagfordeletion'] = 'Merkja skeyti til eyðingar í stað þess að eyða';
$labels['skipdeleted'] = 'Ekki sýna eydd skeyti';
$labels['deletealways'] = 'Ef ekki er hægt að setja skeytið í ruslafötuna, henda þeim';
$labels['deletejunk'] = 'Directly delete messages in Junk';
$labels['showremoteimages'] = 'Sýna myndir annarsstaðar frá';
$labels['fromknownsenders'] = 'frá þekktum sendendum';
$labels['always'] = 'alltaf';
$labels['showinlineimages'] = 'Sýna viðhangandi myndir fyrir neðan skeytið';
$labels['autosavedraft']  = 'Vista sjálfkrafa sem drög';
$labels['everynminutes']  = '$n mínútu fresti';
$labels['refreshinterval']  = 'Refresh (check for new messages, etc.)';
$labels['never']  = 'aldrei';
$labels['immediately']  = 'samstundis';
$labels['messagesdisplaying'] = 'Sýni skeyti';
$labels['messagescomposition'] = 'Semja skeyti';
$labels['mimeparamfolding'] = 'Nafn á viðhengjum';
$labels['2231folding'] = 'Full RFC 2231 (Thunderbird)';
$labels['miscfolding'] = 'RFC 2047/2231 (MS Outlook)';
$labels['2047folding'] = 'Full RFC 2047 (annað)';
$labels['force7bit'] = 'Nota MIME kóðun fyrir 8-bita stafi';
$labels['advancedoptions'] = 'Ítarlegir valkostir';
$labels['focusonnewmessage'] = 'Láta glugga beinast að nýju skeyti';
$labels['checkallfolders'] = 'Athuga ný skeyti í öllum möppum';
$labels['displaynext'] = 'Að eyðingu/færslu lokinni sýna næsta skeyti';
$labels['defaultfont'] = 'Sjálfgefið letur HTML-skeyta';
$labels['mainoptions'] = 'Aðalstillingar';
$labels['browseroptions'] = 'Browser Options';
$labels['section'] = 'Hluti';
$labels['maintenance'] = 'Viðhald';
$labels['newmessage'] = 'Nýtt skeyti';
$labels['signatureoptions'] = 'Valkostir undirskriftar';
$labels['whenreplying'] = 'Þegar svarað';
$labels['replyempty'] = 'do not quote the original message';
$labels['replytopposting'] = 'hefja nýtt skeyti fyrir ofan eldra';
$labels['replybottomposting'] = 'hefja nýtt skeyti undir eldra';
$labels['replyremovesignature'] = 'Þegar svarað fjarlægja upphaflega undirskrift úr skeyti';
$labels['autoaddsignature'] = 'Bæta undirskrift við sjálfkrafa';
$labels['newmessageonly'] = 'ný skeyti eingöngu';
$labels['replyandforwardonly'] = 'svör og áframsendingar eingöngu';
$labels['insertsignature'] = 'Bæta undirskrift við';
$labels['previewpanemarkread']  = 'Merka forskoðuð skeyti sem lesin';
$labels['afternseconds']  = 'eftir $n sekúndur';
$labels['reqmdn'] = 'Biðja ávallt um kvittun';
$labels['reqdsn'] = 'Biðja ávallt um sendingarstöðu';
$labels['replysamefolder'] = 'Setja svarskeyti í möppu sem upphaflegt skeyti er í';
$labels['defaultabook'] = 'Default address book';
$labels['autocompletesingle'] = 'Sleppa aukanetföngum í sjálfklárun';
$labels['listnamedisplay'] = 'Lista tengiliði sem';
$labels['spellcheckbeforesend'] = 'Athuga stafsetningu áður en skeyti er sent';
$labels['spellcheckoptions'] = 'Stafsetningarvalkostir';
$labels['spellcheckignoresyms'] = 'Hunsa orð með merki';
$labels['spellcheckignorenums'] = 'Hunsa orð með tölum';
$labels['spellcheckignorecaps'] = 'Hunsa orð sem eru í hástöfum';
$labels['addtodict'] = 'Bæta við orðalista';
$labels['mailtoprotohandler'] = 'Register protocol handler for mailto: links';
$labels['standardwindows'] = 'Handle popups as standard windows';
$labels['forwardmode'] = 'Messages forwarding';
$labels['inline'] = 'inline';
$labels['asattachment'] = 'as attachment';

$labels['folder']  = 'Mappa';
$labels['folders']  = 'Möppur';
$labels['foldername']  = 'Nafn möppu';
$labels['subscribed']  = 'Valin';
$labels['messagecount'] = 'Skeyti';
$labels['create']  = 'Búa til';
$labels['createfolder']  = 'Búa til nýja möppu';
$labels['managefolders']  = 'Sýsla með möppur';
$labels['specialfolders'] = 'Sérstakar möppur';
$labels['properties'] = 'Eiginleikar';
$labels['folderproperties'] = 'Eiginleikar möppu';
$labels['parentfolder'] = 'Yfirmappa';
$labels['location'] = 'Staðsetning';
$labels['info'] = 'Upplýsingar';
$labels['getfoldersize'] = 'Smelltu til að sjá stærð möppu';
$labels['changesubscription'] = 'Smelltu til að breyta áskrift';
$labels['foldertype'] = 'Möpputegund';
$labels['personalfolder']  = 'Einkamappa';
$labels['otherfolder']  = 'Möppur annara notenda';
$labels['sharedfolder']  = 'Opin mappa';

$labels['sortby'] = 'Raða eftir';
$labels['sortasc']  = 'Raða vaxandi';
$labels['sortdesc'] = 'Raða minnkandi';
$labels['undo'] = 'Taka til baka';

$labels['installedplugins'] = 'Installed plugins';
$labels['plugin'] = 'Viðbætur';
$labels['version'] = 'Útgáfa';
$labels['source'] = 'Uppruni';
$labels['license'] = 'Notkunarleyfi';
$labels['support'] = 'Fá aðstoð';

// units
$labels['B'] = 'B';
$labels['KB'] = 'KB';
$labels['MB'] = 'MB';
$labels['GB'] = 'GB';

// character sets
$labels['unicode'] = 'Unicode';
$labels['english'] = 'Enska';
$labels['westerneuropean'] = 'Vesturevrópskt';
$labels['easterneuropean'] = 'Austurevrópskt';
$labels['southeasterneuropean'] = 'Suðausturevrópskt';
$labels['baltic'] = 'Eystrasalts';
$labels['cyrillic'] = 'Kýrílíska';
$labels['arabic'] = 'Arabíska';
$labels['greek'] = 'Gríska';
$labels['hebrew'] = 'Hebreska';
$labels['turkish'] = 'Tyrkneska';
$labels['nordic'] = 'Norðurlanda';
$labels['thai'] = 'Tælenskt';
$labels['celtic'] = 'Keltneskt';
$labels['vietnamese'] = 'Víetnamskt';
$labels['japanese'] = 'Japanskt';
$labels['korean'] = 'Kóreska';
$labels['chinese'] = 'Kínverska';

?>
