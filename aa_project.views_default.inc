<?php
/**
 * @file
 * aa_project.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function aa_project_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'preview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Preview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'preview' => 'preview',
    'upcoming' => 0,
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_preview_image']['id'] = 'field_preview_image';
  $handler->display->display_options['fields']['field_preview_image']['table'] = 'field_data_field_preview_image';
  $handler->display->display_options['fields']['field_preview_image']['field'] = 'field_preview_image';
  $handler->display->display_options['fields']['field_preview_image']['label'] = '';
  $handler->display->display_options['fields']['field_preview_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_preview_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_preview_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_preview_image']['settings'] = array(
    'picture_group' => 'aa_project_preview',
    'fallback_image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_preview_title']['id'] = 'field_preview_title';
  $handler->display->display_options['fields']['field_preview_title']['table'] = 'field_data_field_preview_title';
  $handler->display->display_options['fields']['field_preview_title']['field'] = 'field_preview_title';
  $handler->display->display_options['fields']['field_preview_title']['label'] = '';
  $handler->display->display_options['fields']['field_preview_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_preview_title']['element_label_colon'] = FALSE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_preview_caption']['id'] = 'field_preview_caption';
  $handler->display->display_options['fields']['field_preview_caption']['table'] = 'field_data_field_preview_caption';
  $handler->display->display_options['fields']['field_preview_caption']['field'] = 'field_preview_caption';
  $handler->display->display_options['fields']['field_preview_caption']['label'] = '';
  $handler->display->display_options['fields']['field_preview_caption']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter criterion: Content: Enable preview (field_preview_enable) */
  $handler->display->display_options['filters']['field_preview_enable_value']['id'] = 'field_preview_enable_value';
  $handler->display->display_options['filters']['field_preview_enable_value']['table'] = 'field_data_field_preview_enable';
  $handler->display->display_options['filters']['field_preview_enable_value']['field'] = 'field_preview_enable_value';
  $handler->display->display_options['filters']['field_preview_enable_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Preview';
  $export['preview'] = $view;

  $view = new view();
  $view->name = 'projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list mobile-list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Alice Anselmi';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'types' => 'types',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'types' => 'types',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Project x type';
  $export['projects'] = $view;

  $view = new view();
  $view->name = 'upcoming';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcoming';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Date - Month */
  $handler->display->display_options['fields']['field_upcoming_date_1']['id'] = 'field_upcoming_date_1';
  $handler->display->display_options['fields']['field_upcoming_date_1']['table'] = 'field_data_field_upcoming_date';
  $handler->display->display_options['fields']['field_upcoming_date_1']['field'] = 'field_upcoming_date';
  $handler->display->display_options['fields']['field_upcoming_date_1']['ui_name'] = 'Content: Date - Month';
  $handler->display->display_options['fields']['field_upcoming_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_upcoming_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_upcoming_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upcoming_date_1']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_upcoming_date_1']['settings'] = array(
    'use_override' => 'none',
    'format' => 'custom',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'none',
        'month' => 'date_or',
        'day' => 'none',
        'hour' => 'none',
        'minute' => 'none',
        'second' => 'none',
        'timezone' => 'none',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Date - Year */
  $handler->display->display_options['fields']['field_upcoming_date']['id'] = 'field_upcoming_date';
  $handler->display->display_options['fields']['field_upcoming_date']['table'] = 'field_data_field_upcoming_date';
  $handler->display->display_options['fields']['field_upcoming_date']['field'] = 'field_upcoming_date';
  $handler->display->display_options['fields']['field_upcoming_date']['ui_name'] = 'Content: Date - Year';
  $handler->display->display_options['fields']['field_upcoming_date']['label'] = '';
  $handler->display->display_options['fields']['field_upcoming_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_upcoming_date']['alter']['text'] = '<div class="date-year">[field_upcoming_date]</div>
<div class="date-month">[field_upcoming_date_1]</div>';
  $handler->display->display_options['fields']['field_upcoming_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upcoming_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_upcoming_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'custom',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'date_or',
        'month' => 'none',
        'day' => 'none',
        'hour' => 'none',
        'minute' => 'none',
        'second' => 'none',
        'timezone' => 'none',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'G',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_upcoming_title']['id'] = 'field_upcoming_title';
  $handler->display->display_options['fields']['field_upcoming_title']['table'] = 'field_data_field_upcoming_title';
  $handler->display->display_options['fields']['field_upcoming_title']['field'] = 'field_upcoming_title';
  $handler->display->display_options['fields']['field_upcoming_title']['label'] = '';
  $handler->display->display_options['fields']['field_upcoming_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_upcoming_title']['element_label_colon'] = FALSE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_upcoming_caption']['id'] = 'field_upcoming_caption';
  $handler->display->display_options['fields']['field_upcoming_caption']['table'] = 'field_data_field_upcoming_caption';
  $handler->display->display_options['fields']['field_upcoming_caption']['field'] = 'field_upcoming_caption';
  $handler->display->display_options['fields']['field_upcoming_caption']['label'] = '';
  $handler->display->display_options['fields']['field_upcoming_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_upcoming_caption']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_upcoming_caption']['element_label_colon'] = FALSE;
  /* Field: Custom: Title and Caption */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Title and Caption';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="field-upcoming-title">[field_upcoming_title]</div>
<div class="field-upcoming-caption">[field_upcoming_caption]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'field-upcoming-container';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_upcoming_link']['id'] = 'field_upcoming_link';
  $handler->display->display_options['fields']['field_upcoming_link']['table'] = 'field_data_field_upcoming_link';
  $handler->display->display_options['fields']['field_upcoming_link']['field'] = 'field_upcoming_link';
  $handler->display->display_options['fields']['field_upcoming_link']['label'] = '';
  $handler->display->display_options['fields']['field_upcoming_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upcoming_link']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Date */
  $handler->display->display_options['sorts']['field_upcoming_date']['id'] = 'field_upcoming_date';
  $handler->display->display_options['sorts']['field_upcoming_date']['table'] = 'field_data_field_upcoming_date';
  $handler->display->display_options['sorts']['field_upcoming_date']['field'] = 'field_upcoming_date';
  $handler->display->display_options['sorts']['field_upcoming_date']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter criterion: Content: Enable upcoming (field_upcoming_enable) */
  $handler->display->display_options['filters']['field_upcoming_enable_value']['id'] = 'field_upcoming_enable_value';
  $handler->display->display_options['filters']['field_upcoming_enable_value']['table'] = 'field_data_field_upcoming_enable';
  $handler->display->display_options['filters']['field_upcoming_enable_value']['field'] = 'field_upcoming_enable_value';
  $handler->display->display_options['filters']['field_upcoming_enable_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Upcoming';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'upcoming';
  $export['upcoming'] = $view;

  return $export;
}
