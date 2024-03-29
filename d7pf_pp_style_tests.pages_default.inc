<?php
/**
 * @file
 * d7pf_pp_style_tests.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function d7pf_pp_style_tests_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'd7pf_pp_style_tests';
  $page->task = 'page';
  $page->admin_title = 'd7pf_pp_style_tests';
  $page->admin_description = 'This is a test of using Panel Pages to make a Primary page';
  $page->path = 'pp/%pp/style_tests';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'pp' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          3 => '3',
          2 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          5 => 0,
          9 => 0,
          7 => 0,
          8 => 0,
          14 => 0,
          15 => 0,
          6 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_d7pf_pp_style_tests_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'd7pf_pp_style_tests';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'name' => 'node',
        'id' => 1,
        'identifier' => 'Node',
        'keyword' => 'node',
        'context_settings' => array(
          'node' => 'Vitals Primary Page (test) [nid: 10025]',
          'nid' => '10025',
        ),
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:pp_links_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'center' => array(),
      'pp_top' => array(),
      'setup' => NULL,
      'option1' => array(),
      'option3' => NULL,
      'option4' => NULL,
      'right_links' => array(
        'corner_location' => 'panel',
      ),
    ),
    'right_links' => array(
      'style' => 'rounded_corners',
    ),
    'style' => 'stylizer',
    'center' => array(
      'style' => 'stylizer',
    ),
    'pp_top' => array(
      'style' => 'stylizer',
    ),
    'option1' => array(
      'style' => 'stylizer',
    ),
  );
  $display->cache = array();
  $display->title = '%pp:name';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'pp_top';
    $pane->type = 'views';
    $pane->subtype = 'pp_cck_descriptions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_term_1.name',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $display->content['new-1'] = $pane;
    $display->panels['pp_top'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'pp_top';
    $pane->type = 'views';
    $pane->subtype = 'pp_cck_descriptions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_6',
      'context' => array(
        0 => 'argument_term_1.name',
      ),
      'override_title' => 1,
      'override_title_text' => 'Primary Info',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['pp_top'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'right_links';
    $pane->type = 'views';
    $pane->subtype = 'd7pf_security_atts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '50',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'context' => array(
        0 => 'argument_term_1.name',
      ),
      'override_title' => 1,
      'override_title_text' => 'Security Attributes',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pplinksclass',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['right_links'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'right_links';
    $pane->type = 'views';
    $pane->subtype = 'pp_cck_descriptions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '2',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'page_7',
      'context' => array(
        0 => 'argument_term_1.name',
      ),
      'override_title' => 1,
      'override_title_text' => 'Optional Features',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['right_links'][1] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'right_links';
    $pane->type = 'views';
    $pane->subtype = 'pp_cck_descriptions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '2',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'page_3',
      'context' => array(
        0 => 'argument_term_1.name',
      ),
      'override_title' => 1,
      'override_title_text' => 'Setup',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['right_links'][2] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'right_links';
    $pane->type = 'views';
    $pane->subtype = 'pp_cck_descriptions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '2',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'page_5',
      'context' => array(
        0 => 'argument_term_1.name',
      ),
      'override_title' => 1,
      'override_title_text' => 'Item Keys',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['right_links'][3] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['d7pf_pp_style_tests'] = $page;

  return $pages;

}
